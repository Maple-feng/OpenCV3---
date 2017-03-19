#include <opencv2/opencv.hpp>
using namespace cv;//包含cv命名空间

void main(){
	Mat srcImage = imread("图1.28 运行效果图.jpg");//载入图像
	imshow("【原始图】", srcImage);//显示图像
	waitKey(0);//等待任意按键按下
}