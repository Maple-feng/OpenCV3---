#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main(){
	Mat srcImage = imread("图1.31 原始图.jpg");//载入原始图

	imshow("均值滤波【原图】", srcImage);//显示原始图

	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));//进行滤波操作

	imshow("均值滤波【效果图】",dstImage);//显示效果图
	waitKey(0);
	return 0;
}