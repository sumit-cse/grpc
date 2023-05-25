#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "opencv2/opencv.hpp"
#include "slu_img_stream.grpc.pb.h"

using sluimgstream::SluImgStream;
using sluimgstream::ResponseImages;

namespace sluimgstream
{
	std::string GetArgVal(int argc, char** argv, std::string arg_string)
	{
		std::string arg_val = "";
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
		return arg_val;
	}
	
	void ParseVideo(const std::string& vid_path, std::vector<sluimgstream::ResponseImages> *images_list)
	{
		(*images_list).clear();
		try
		{
			//cv::VideoCapture cap(vid_path);
			cv::VideoCapture cap("/home/slu/Videos/day_seq4.avi");
			if(!cap.isOpened())
				std::cerr << "VideoCapture error" << std::endl;
	      		//CV_Error(cv::Error, "Can not open Video file");
			else
		    		std::cout << "VideoCapture populated " << std::endl;
	    		std::cout << "Number of frames : " << cap.get(cv::CAP_PROP_FRAME_COUNT) << std::endl;
	    	for(int frameNum = 0; frameNum < cap.get(cv::CAP_PROP_FRAME_COUNT);frameNum+=100)
	    	{
	      		cv::Mat frame;
	      		ResponseImages ri = ResponseImages();
	      		int img_size;

	      		cap >> frame;
	      		//frame = frame.reshape(0, 1);
			uchar* uc_frame = frame.data;
	      		img_size = frame.total() * frame.elemSize();
	      		ri.set_img_size(img_size);
		    	//std::cout << "Frame data " << uc_frame << std::endl;
	      		ri.set_img_data((char *)uc_frame);
	      		(*images_list).push_back(ri);
	      	}
		}
		catch(cv::Exception& e)
		{
			std::cerr << e.msg << std::endl;
    			exit(1);
		}
		std::cout << "Parsing Video, loaded " << (*images_list).size() << " images." << std::endl;
	}
	
}
