#ifndef INCLUDE_IMAGEPROCESS_H_
#define INCLUDE_IMAGEPROCESS_H_

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <vector>


using namespace std;
using namespace cv;


class imageProcess{
private:

public: 
	Mat resizeImage(Mat& img); // unit test
	Mat histogramEqualization(Mat& img);
	Mat toGray(Mat& img); // unit test
	Mat lowPassFilter(Mat& img); // unit test
};

#endif    // INCLUDE_IMAGEPROCESS_H_
