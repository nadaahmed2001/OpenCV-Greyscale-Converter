# Image to Greyscale Conversion using OpenCV and CMake

## Requirements

- **CMake**: [Download CMake](https://cmake.org/download/)
- **OpenCV**: Clone or download [OpenCV from GitHub](https://github.com/opencv/opencv)

## Installation

1. **CMake Installation**:
   - Download and install CMake from the official website.
  
2. **OpenCV Installation**:
   - Clone or download the OpenCV repository from GitHub.
   - Install OpenCV following the instructions provided in the OpenCV documentation or by any recources

## Build Instructions

1. **Clone this repository**:

2. **Set Up CMake**:
- Open CMakeLists.txt and make sure the paths to OpenCV libraries are correctly set.

3. **Build the Project**:
- Use the following commands in the terminal:
```
mkdir build
cd build
cmake ..
make
```

## Usage

1. **Run the Program**:
- After building the project, execute the compiled binary.
- Provide the image file path as an argument to the program.

2. **Output**:
- The output grayscale image is now stored in the `images` folder.

## Issues that Faced me and Solution
- Issue: Unable to include `<opencv2/opencv.hpp>`.
- Solution: Provided the full path to the header file manually, which resolved the issue

## This is the input vs output images:

![Screenshot 2024-01-02 115104](https://github.com/nadaahmed2001/OpenCV-Greyscale-Converter/assets/60941223/2400c202-31c4-4316-a3a1-26b58ad16e87)
