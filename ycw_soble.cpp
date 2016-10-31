#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<stdlib.h>
#include<stdio.h>
using namespace cv;
using namespace std;
int main(int argc,char** argv){

 Mat src,src_gray;
 Mat grad;
// char* window_name = "Soble Degree";
 int scale =1;
 int delta=0;
 int ddepth=CV_16S;
 int c;
 src=imread("image.jpg");
 if(!src.data)
{

   return -1;

}
 GaussianBlur(src,src,Size(3,3),0,0,BORDER_DEFAULT);
 cvtColor(src,src_gray,CV_RGB2GRAY);
 namedWindow("Soble Degree",CV_WINDOW_AUTOSIZE);
 Mat grad_x,grad_y;
 Mat abs_grad_x,abs_grad_y;
 Sobel(src_gray,grad_x,ddepth,1,0,3,scale,delta,BORDER_DEFAULT);
 convertScaleAbs(grad_x,abs_grad_y);
 addWeighted(abs_grad_x,0.5,abs_grad_y,0.5,0,grad);
 imshow("Soble Degree",grad);
 waitKey(0);
 return 0;


}
