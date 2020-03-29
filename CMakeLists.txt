# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("weClientCmake")

# 包含子项目。
# add_subdirectory ("lib")

# 将源代码添加到此项目的可执行文件。
add_executable (${PROJECT_NAME} 
	"src/Boot.cpp"
	"src/pages/LoginPage.cpp"
	"src/pages/LiveList.cpp"
	"src/pages/LivePage.cpp"
)

# 寻找链接库
find_library(WS2_LIBRARY ws2_32)

# 配置工程内部链接库
set(FLTKD_LIBRARY "${PROJECT_SOURCE_DIR}/lib/fltkd.lib")
set(FLTKIMAGED_LIBRARY "${PROJECT_SOURCE_DIR}/lib/fltkimagesd.lib")
set(FLTKGLD_LIBRARY "${PROJECT_SOURCE_DIR}/lib/fltkgld.lib")
set(FLTKFORMD_LIBRARY "${PROJECT_SOURCE_DIR}/lib/fltkformsd.lib")
set(FLTKJPEGD_LIBRARY "${PROJECT_SOURCE_DIR}/lib/fltkjpegd.lib")
set(FLTKPNGD_LIBRARY "${PROJECT_SOURCE_DIR}/lib/fltkpngd.lib")
set(FLTKZLIBD_LIBRARY "${PROJECT_SOURCE_DIR}/lib/fltkzlibd.lib")


set(AVCODEC_INCLUDE_DIR libavcodec/avcodec.h)
set(AVCODEC_LIBRARY "${PROJECT_SOURCE_DIR}/lib/avcodec.lib")

set(AVFORMAT_INCLUDE_DIR libavformat/avformat.h)
set(AVFORMAT_LIBRARY "${PROJECT_SOURCE_DIR}/lib/avformat.lib")

set(AVUTIL_INCLUDE_DIR libavutil/avutil.h)
set(AVUTIL_LIBRARY "${PROJECT_SOURCE_DIR}/lib/avutil.lib")

set(AVDEVICE_INCLUDE_DIR libavdevice/avdevice.h)
set(AVDEVICE_LIBRARY "${PROJECT_SOURCE_DIR}/lib/avdevice.lib")

set(AVFILTER_INCLUDE_DIR libavfilter/avfilter.h)
set(AVFILTER_LIBRARY "${PROJECT_SOURCE_DIR}/lib/avfilter.lib")

set(POSTPROC_INCLUDE_DIR libpostproc/postprocess.h)
set(POSTPROC_LIBRARY "${PROJECT_SOURCE_DIR}/lib/postproc.lib")

set(SWRESAMPLE_INCLUDE_DIR libswresample/swresample.h)
set(SWRESAMPLE_LIBRARY "${PROJECT_SOURCE_DIR}/lib/swresample.lib")

set(SWSCALE_INCLUDE_DIR libswscale/swscale.h)
set(SWSCALE_LIBRARY "${PROJECT_SOURCE_DIR}/lib/swscale.lib")

# 配置链接库
target_link_libraries( ${PROJECT_NAME}  
	PRIVATE 
		${WS2_LIBRARY} 
		${FLTKD_LIBRARY}
		${FLTKIMAGED_LIBRARY}
		${FLTKGLD_LIBRARY}
		${FLTKFORMD_LIBRARY}
		${FLTKJPEGD_LIBRARY}
		${FLTKPNGD_LIBRARY}
		${FLTKZLIBD_LIBRARY}
		${AVCODEC_LIBRARY} 
		${AVFORMAT_LIBRARY} 
		${AVUTIL_LIBRARY} 
		${AVDEVICE_LIBRARY}
		${AVFILTER_LIBRARY}
		${POSTPROC_LIBRARY}
		${SWRESAMPLE_LIBRARY}
		${SWSCALE_LIBRARY}
)
target_include_directories( ${PROJECT_NAME}  
	PRIVATE 
		${PROJECT_SOURCE_DIR}/include
		${AVCODEC_INCLUDE_DIR} 
		${AVFORMAT_INCLUDE_DIR} 
		${AVUTIL_INCLUDE_DIR} 
		${AVDEVICE_INCLUDE_DIR}
		${AVFILTER_INCLUDE_DIR}
		${POSTPROC_INCLUDE_DIR}
		${SWRESAMPLE_INCLUDE_DIR}
		${SWSCALE_INCLUDE_DIR}
)
