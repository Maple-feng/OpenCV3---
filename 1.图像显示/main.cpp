#include <opencv2/opencv.hpp>
using namespace cv;//����cv�����ռ�

void main(){
	Mat srcImage = imread("ͼ1.28 ����Ч��ͼ.jpg");//����ͼ��
	imshow("��ԭʼͼ��", srcImage);//��ʾͼ��
	waitKey(0);//�ȴ����ⰴ������
}