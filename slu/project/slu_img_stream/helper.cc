#include <iostream>
#include <sstream>
#include <string>
#include <vector>

//#include "opencv2/opencv.hpp"

#include "slu_img_stream.grpc.pb.h"
using sluimgstream::ResponseImages;


namespace sluimgstream
{
	std::string GetArgVal(int argc, char** argv, std::string arg_string)
	{
		/*std::string arg_val = "";
		if(argc > 1)
		{
			for(int i=1;i<=argc;i++)
			{
				std::string argv_1 = argv[i];
				size_t pos = argv_1.find(arg_string);
				if(pos != std::string::npos)
				{
					pos += arg_string.size();
					if(argv_1[pos] == ' ' || argv_1[pos] == '=')
					{
						arg_val = argv_1.substr(pos + 1);
					}
				}
			}
		}
		return arg_val;*/
		std::cout << "GetArgVal" << std::endl;
	}

	void ParseVideo(const std::string& vid_path, std::vector<ResponseImages> images_list)
	{
		/*images_list.clear();
		try
		{
			cv::VideoCapture cap("/User/name/videos/Example1.mp4");
			if(!cap.isOpened())
	      		CV_Error(CV_StsError, "Can not open Video file");
	    	for(int frameNum = 0; frameNum < cap.get(CV_CAP_PROP_FRAME_COUNT);frameNum+=10)
	    	{
	      		cv::Mat frame;
	      		ResponseImages ri = ResponseImages();
	      		int img_size;

	      		cap >> frame;
	      		frame = frame.reshape(0, 1);
	      		img_size = frame.total() * frame.elemSize();
	      		ri.set_img_size(img_size);
	      		ri.set_img_data(0, frame.data);
	      		images_list.push_back(ri);
	      	}
		}
		catch(cv::Exception& e)
		{
			std::cerr << e.msg << std::endl;
    		exit(1);
		}*/
		std::cout << "Parsing Video, loaded " << images_list.size() << " images." << std::endl;
	}
}