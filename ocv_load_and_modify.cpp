#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv/highgui.h>


using namespace cv;

int main(int argc, char **argv)
{
	Mat image, gray_image;
	image=imread(argv[1], 1);
	if (argc!=2 || !image.data)
		{
			printf("No image to display");
			return -1;
		}
	
	cvtColor(image, gray_image, COLOR_RGB2GRAY);
	
	imwrite("gray_image.jpg", gray_image);
	
	namedWindow("Color image", CV_WINDOW_AUTOSIZE);
	namedWindow("Gray image",  CV_WINDOW_AUTOSIZE);
	
	imshow("Color image", image);
	imshow("Gray image", gray_image);
	waitKey(0);
	
	return 0;
	
}
