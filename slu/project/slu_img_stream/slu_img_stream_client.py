import logging
import asyncio
from typing import Iterable
import itertools

import grpc
import slu_img_stream_pb2
import slu_img_stream_pb2_grpc

image_list = []
data_list = []
flag = True

_LOGGER = logging.getLogger(__name__)
_LOGGER.setLevel(logging.INFO)




async def get_image_data():
    print("Sending image data")
    for obj in data_list:
        print("in loop")
        print("Size of data list : ", len(data_list))
        #obj = image_list.pop()
        yield slu_img_stream_pb2.ProcessedDataRequest(img_size = obj.img_size, img_data = obj.img_data)



async def slu_img_stream_send_images(stub, wait_for_ready:bool = None) -> None:
    print("Ready ... Looking for images")
    try :
        async for image in stub.SendImages(
                        slu_img_stream_pb2.ReadyToReceiveImagesRequest(readyClientFlag = True), 
                        wait_for_ready = wait_for_ready):
            print("SendImages RPC called, receiving image data")
	    img = slu_img_stream_pb2.ResponseImages(img_size = len(image.img_data), img_data = image.img_data)
            image_list.append(img)
	    await process_image(img)
            print(image_list)
            flag = False
    except grpc.aio.AioRpcError as rpc_error:
        print(rpc_error)
        assert rpc_error.code() == grpc.StatusCode.UNAVAILABLE
        assert not wait_for_ready
        _LOGGER.info("Exception : %s", rpc_error)


async def slu_img_stream_receive_data(stub, wait_for_ready:bool = None) -> None:
    print("Waiting to process images")
    #while(len(image_list)<1) : pass
    await asyncio.sleep(1)
    try :
        response = await stub.ReceiveData(get_image_data(), wait_for_ready = wait_for_ready)
        print("ReceiveData RPC called")
        print("Server Response ", response)
    except grpc.aio.AioRpcError as rpc_error:
        print(rpc_error)
        assert rpc_error.code() == grpc.StatusCode.UNAVAILABLE
        assert not wait_for_ready
        _LOGGER.info("Exception : %s", rpc_error)


async def run() -> None:
    async with grpc.aio.insecure_channel('localhost:50051') as channel:
        stub = slu_img_stream_pb2_grpc.SluImgStreamStub(channel)
        await asyncio.get_event_loop().create_task(slu_img_stream_send_images(stub, wait_for_ready = True))
        await asyncio.get_event_loop().create_task(slu_img_stream_receive_data(stub, wait_for_ready = True))



if __name__ == '__main__':
    logging.basicConfig()
    asyncio.run(run())
