#include <opencv2/opencv.hpp>
using namespace cv;

int main(){
	VideoCapture capture("������֮ŭ��������CG.flv");//������Ƶ

	while (1){
		Mat frame;//����һ��Mat���������ڴ洢ÿһ֡��ͼ��
		capture >> frame;//��ȡ��ǰ֡

		//����Ƶ������ɣ��˳�ѭ��
		if (frame.empty()){
			break;
		}

		imshow("��ȡ��Ƶ", frame);//��ʾ��ǰ֡
		waitKey(30);//��ʱ30ms
	}
	return 0;
}