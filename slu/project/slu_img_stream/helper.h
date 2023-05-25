#ifndef GRPC_COMMON_CPP_SLU_IMG_STREAM_HELPER_H_
#define GRPC_COMMON_CPP_SLU_IMG_STREAM_HELPER_H_

#include <string>
#include <vector>

namespace sluimgstream {
class ResponseImages;

std::string GetArgVal(int argc, char** argv, std::string arg_string);

void ParseVideo(const std::string& vid_path, std::vector<ResponseImages> *images_list);

}

#endif  // GRPC_COMMON_CPP_SLU_IMG_STREAM_HELPER_H_
