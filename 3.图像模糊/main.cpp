#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main(){
	Mat srcImage = imread("ͼ1.31 ԭʼͼ.jpg");//����ԭʼͼ

	imshow("��ֵ�˲���ԭͼ��", srcImage);//��ʾԭʼͼ

	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));//�����˲�����

	imshow("��ֵ�˲���Ч��ͼ��",dstImage);//��ʾЧ��ͼ
	waitKey(0);
	return 0;
}