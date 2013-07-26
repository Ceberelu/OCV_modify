cmake_minimum_required(VERSION 2.8)
project( ocv_load_and_modify )
find_package( OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIR})
add_executable( ocv_load_and_modify ocv_load_and_modify.cpp )
target_link_libraries( ocv_load_and_modify ${OpenCV_LIBS} )

