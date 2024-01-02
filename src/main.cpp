#include <iostream>
#include <opencv2\opencv.hpp>
////if the above one doesn't work use this one instead:
//#include <C:\tools\opencv\build\include\opencv2\opencv.hpp>
using namespace std;


bool loadImage(const string& filePath, cv::Mat& image) {
    image = imread(filePath, cv::IMREAD_COLOR);
    return !image.empty();
}

void convertToGray(const cv::Mat& inputImage, cv::Mat& outputImage) {
    cvtColor(inputImage, outputImage, cv::COLOR_BGR2GRAY);
}

void displayAndSaveImage(const string& windowName, const cv::Mat& image) {
    imshow(windowName, image);
    imwrite("../images/output_Image.jpg", image);
    cv::waitKey(0);
}

int main() {
    cv::Mat inputImage, grayImage;

    if (!loadImage("../images/input_image.jpg", inputImage)) {
        cout << "Can't find the image" << endl;
        return -1;
    }

    convertToGray(inputImage, grayImage);

    displayAndSaveImage("Grayscale Image", grayImage);

    return 0;
}