#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main(){
	Mat srcImage = imread("图1.33 原始图.jpg");//载入原始图

	imshow("【原始图】Canny边缘检测", srcImage);//显示原始图
	Mat edge, grayImage;//参数定义

	cvtColor(srcImage, grayImage, CV_BGR2GRAY);//将原图像转换为灰度图像

	blur(grayImage, edge, Size(3, 3));//先用3*3内核来降噪

	Canny(edge, edge, 3, 9, 3);//运行Canny算子

	imshow("【效果图】Canny边缘检测", edge);//显示效果图

	waitKey(0);
	return 0;
}