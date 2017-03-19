#include <opencv2/opencv.hpp>
using namespace cv;

int main(){
	VideoCapture capture("巫妖王之怒开场动画CG.flv");//读入视频

	while (1){
		Mat frame;//定义一个Mat变量，用于存储每一帧的图像
		capture >> frame;//读取当前帧

		//若视频播放完成，退出循环
		if (frame.empty()){
			break;
		}

		imshow("读取视频", frame);//显示当前帧
		waitKey(30);//延时30ms
	}
	return 0;
}