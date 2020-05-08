#include <opencv2/highgui/highgui.hpp>


#include <iostream>
#include "EdgeDectector.h"
#include "demoLib.h"
#include "convert_ColorModel.h"
#include "Transform.h"
#include "operator.h"
#include "Kernel.h"
#include "Gradient.h"
#include "video.h"
using namespace cv;
using namespace std;
Mat src, src_gray;
Mat dst, detected_edges;
/**
* @function CannyThreshold
* @brief Trackbar callback - Canny thresholds input with a ratio 1:3
*/

void demoGauss(Mat im)
{
	Mat ker = GAUSS(3);
	convolutionRGB(im, ker, im);
	imshow("Gauss", im);
}

void demoSobel(Mat im)
{
	Mat ker = GradientSobel(3);
	convolutionRGB(im, ker, im);
	imshow("Sobel", im);
}

void demoFreiChen(Mat im)
{
	Mat ker = Frei_Chen();
	convolutionRGB(im, ker, im);
	imshow("FreiChen", im);
}

void demoPrewitt(Mat im)
{
	Mat ker = GradientPrewitt(3);
	convolutionRGB(im, ker, im);
	imshow("Prewitt", im);
}

void demoLibRotate(Mat im)
{
	imshow("Rotate", rotate(im));
}
int main(){
	
	Mat im = imread("e:/h.jpg");
	if (im.empty()){

		cout << "Cannot load image!" << endl;
		
		return -1;

	}
	//readAndShowVideo("đường dẫn video");
	//Mat des = im.clone();
	//demoLibRotate(des);
	//myCanny(im, des, 30, 60);
	//imshow("Canny", des);
	//demoGauss(im);
	//demoSobel(im);
	//demoFreiChen(im);
	//demoPrewitt(im);
	
	waitKey(0);

}