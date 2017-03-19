#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main(){
	Mat srcImage = imread("ͼ1.33 ԭʼͼ.jpg");//����ԭʼͼ

	imshow("��ԭʼͼ��Canny��Ե���", srcImage);//��ʾԭʼͼ
	Mat edge, grayImage;//��������

	cvtColor(srcImage, grayImage, CV_BGR2GRAY);//��ԭͼ��ת��Ϊ�Ҷ�ͼ��

	blur(grayImage, edge, Size(3, 3));//����3*3�ں�������

	Canny(edge, edge, 3, 9, 3);//����Canny����

	imshow("��Ч��ͼ��Canny��Ե���", edge);//��ʾЧ��ͼ

	waitKey(0);
	return 0;
}