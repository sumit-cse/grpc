import logging
import asyncio
from typing import Iterable
import itertools

import grpc
import slu_img_stream_pb2
import slu_img_stream_pb2_grpc

image_list = []
isProcessing = False

_LOGGER = logging.getLogger(__name__)
_LOGGER.setLevel(logging.INFO)


async def process_image():
    print("Processing images")
    isProcessing = True
    for obj in image_list:
        print(len(image_list))
        print(obj)
        yield slu_img_stream_pb2.ProcessedDataRequest(img_size = obj.img_size, img_data = obj.img_data)
        image_list.remove(obj)
    isProcessing = True



async def slu_img_stream_send_images(stub, wait_for_ready:bool = None) -> None:
    print("Ready ... Looking for images")
    try :
        async for image in stub.SendImages(
                        slu_img_stream_pb2.ReadyToReceiveImagesRequest(readyClientFlag = True), 
                        wait_for_ready = wait_for_ready):
            print("SendImages RPC called, receiving image data")
            image_list.append(slu_img_stream_pb2.ResponseImages(img_size = len(image.img_data), img_data = image.img_data))
            print(image_list)
            if isProcessing is False:
                await asyncio.get_event_loop().create_task(slu_img_stream_receive_data(stub, wait_for_ready = True))
    except grpc.aio.AioRpcError as rpc_error:
        print(rpc_error)
        assert rpc_error.code() == grpc.StatusCode.UNAVAILABLE
        assert not wait_for_ready
        _LOGGER.info("Exception : %s", rpc_error)


async def slu_img_stream_receive_data(stub, wait_for_ready:bool = None) -> None:
    print("Waiting to process images")
    try :
        response = await stub.ReceiveData(process_image(), wait_for_ready = wait_for_ready)
        print("ReceiveData RPC called")
        print("Server Response ", response)
    except grpc.aio.AioRpcError as rpc_error:
        print(rpc_error)
        assert rpc_error.code() == grpc.StatusCode.UNAVAILABLE
        assert not wait_for_ready
        _LOGGER.info("Exception : %s", rpc_error)


async def run() -> None:
    
    CHANNEL_OPTIONS = [('grpc.lb_policy_name', 'pick_first'),
                   ('grpc.enable_retries', 0),
                   ('grpc.keepalive_time_ms', 10000),
                   ('grpc.keepalive_timeout_ms', 10000),
                   ('grpc.keepalive_permit_without_calls', 1),
                   ('grpc.http2.max_pings_without_data', 0),
                   ('grpc.http2.min_time_between_pings_ms', 10000),
                   ('grpc.http2.min_ping_interval_without_data_ms',  5000)]

    async with grpc.aio.insecure_channel('localhost:50051',
                        options = CHANNEL_OPTIONS) as channel:
        stub = slu_img_stream_pb2_grpc.SluImgStreamStub(channel)
        await asyncio.get_event_loop().create_task(slu_img_stream_send_images(stub, wait_for_ready = True))



if __name__ == '__main__':
    logging.basicConfig()
    asyncio.run(run())