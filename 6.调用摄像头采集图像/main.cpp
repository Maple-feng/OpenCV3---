#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <cctype>
#include <iostream>
#include <iterator>
#include <stdio.h>

using namespace std;
using namespace cv;

int main(int argc, const char** argv)
{
	CvCapture* capture;
	Mat frame;
	capture = cvCreateCameraCapture(0);
	waitKey(1000);
	while (1)
	{
		frame = cvQueryFrame(capture);    // 摄像头读取文件开关
		if (!frame.empty()) imshow("Camera", frame);
	  /*else break;*/
		waitKey(10);
	}
	cvReleaseCapture(&capture);
	return 0;
}