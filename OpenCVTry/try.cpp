#include<opencv2/opencv.hpp>
#include<opencv2/cudawarping.hpp>
#include<iostream>
using namespace std;

int main()
{
	int countD= cv::cuda::getCudaEnabledDeviceCount();
	std::cout << "device count : " << countD << std::endl;

	cv::cuda::printCudaDeviceInfo(0);
	
	//cv::cuda::resize();
	cv::Mat img = cv::imread("lenna.jpg");
	cv::namedWindow("image", cv::WINDOW_NORMAL);
	cv::imshow("image", img);

	cv::waitKey(0);
	return 0;
}