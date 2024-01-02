cmake_minimum_required(VERSION 3.23)
project(A4) # ---> replace with you project name

set(CMAKE_CXX_STANDARD 23)

set(OpenCV_DIR "C:/tools/opencv/build")

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

file(GLOB SOURCE_FILES "src/*.cpp") #src/main.cpp

add_executable(A4 ${SOURCE_FILES})
target_link_libraries(A4 ${OpenCV_LIBS})
