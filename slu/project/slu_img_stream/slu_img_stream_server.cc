#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <assert.h>

//#include "helper.h"

#include <grpc/grpc.h>
#include <grpcpp/security/server_credentials.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
#include "slu_img_stream.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerWriter;
using grpc::Status;
using sluimgstream::SluImgStream;
using sluimgstream::ResponseImages;
using sluimgstream::ReadyToReceiveImagesRequest;
using sluimgstream::ResponseDataReceived;
using sluimgstream::ProcessedDataRequest;

class SluImgStreamImpl final : public SluImgStream::Service
{
  public :
    explicit SluImgStreamImpl(const std::string& vid_path)
    {
    	//sluImgStream::ParseVideo(vid_path, response_images_list_);
    	std::cout << "Initializing SluImgStreamImpl" << std::endl;
    	ResponseImages ri1, ri2, ri3;
    	char ch1[3] = {'a', 'b', 'c'};
    	char ch2[3] = {'d', 'e', 'f'};
    	char ch3[3] = {'g', 'h', 'i'};
    	std::cout << "Initializing ri1" << std::endl;
    	ri1.set_img_size(3);
    	std::cout << "Initialized ri1.set_img_size(3)" << std::endl;
    	ri1.set_img_data(ch1);
    	std::cout << "Initialized ri1.set_img_data(0, ch1)" << std::endl;
    	ri2.set_img_size(3);
    	ri2.set_img_data(ch2);
    	ri3.set_img_size(3);
    	ri3.set_img_data(ch3);
    	response_images_list_.push_back(ri1);
    	response_images_list_.push_back(ri2);
    	response_images_list_.push_back(ri3);
    	std::cout << "Initialization completed : SluImgStreamImpl" << std::endl;
    	request_count_ = 0;
    	response_count_ = 0;
    }

    Status SendImages(ServerContext* serverContext,
    	              	const ReadyToReceiveImagesRequest* clientRequest,
                      ServerWriter<ResponseImages>* writer) override
    {
    	if(clientRequest->readyclientflag())
    	{
    		for(const ResponseImages& ri : response_images_list_)
    		{
    			writer->Write(ri);
    			response_count_++;
	    		std::cout << "response count " << response_count_ << std::endl;
    		}
    	}
    	return Status::OK;
    }

    Status ReceiveData(ServerContext* serverContext,
                      ServerReader<ProcessedDataRequest>* reader,
    	              	ResponseDataReceived* serverResponse) override
    {
    	ProcessedDataRequest info;
    	while (reader->Read(&info))
    	{
    		std::cout << "Receiving Processed Data" << std::endl;
    		request_data_list_.push_back(info);
    			request_count_++;
	    		std::cout << "request count " << request_count_ << std::endl;
    	}
    	if(response_count_ == request_count_)
    	{
    		serverResponse->set_acknowledgedatareceive(true);
    	}
    	return Status::OK;
    }

  private :
    std::vector<ResponseImages> response_images_list_;
    std::vector<ProcessedDataRequest> request_data_list_;
    long request_count_;
    long response_count_;
};

void RunServer(const std::string& vid_path, 
	           const std::string& host_name,
	           const std::string& port)
{
	/*
	if(strcmp(host_name.c_str(), "") == 0)
	{
		//char host_name[256];
		int result = getHostName(host_name, 256);
		assert(result == 0);
	}
	std::stringstream server_address;
	server_address << host_name << ":" << port;
	*/

	// TODO : Remove Hardcoding
  std::string server_address("0.0.0.0:50051");
	SluImgStreamImpl service(vid_path);

  //grpc::EnableDefaultHealthCheckService(true);
  //grpc::reflection::InitProtoReflectionServerBuilderPlugin();

	ServerBuilder builder;
	//builder.AddListeningPort(server_address.str(), grpc::InsecureServerCredentials());
	builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
	builder.RegisterService(&service);
	std::unique_ptr<Server> server(builder.BuildAndStart());
	//std::cout << "Server listening on " << server_address.str() << std::endl;
	std::cout << "Server listening on " << server_address << std::endl;
	server->Wait();
}

int main(int argc, char** argv)
{
	/*std::string vid_path = sluImgStream::GetArgVal(argc, argv, "--vid_path");
	std::string host_name = sluImgStream::GetArgVal(argc, argv, "--hostname");
	std::string port = sluImgStream::GetArgVal(argc, argv, "--port");*/
	RunServer("path", "host_name", "port");

	return 0;
}