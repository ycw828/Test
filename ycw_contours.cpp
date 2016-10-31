#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
using namespace cv;
using namespace std;
int main(){
  Mat src=imread("1.jpg");
  imshow("src",src);
  Mat gray;
  cvtColor(src,gray,CV_BGR2GRAY);
  imshow("gray",gray);
  Mat threshold;
  adaptiveThreshold(src,threshold,255,ADAPTIVE_THRESH_MEAN_C,THRESH_BINARY,3,5);
  imshow("threshold",threshold);
  vector<vector<Point> > contours;
  vector<Vec4i> hierarchy;
  findContours(threshold,contours,hierarchy,RETR_CCOMP,CHAIN_APPROX_SIMPLE);  
  Mat contours_image;
  
  int index=0;
  for(;index>=0;index=hierarchy[index][0])
   {
    Scalar color (rand()&255,rand()&255,rand()&255);
    drawContours(contours_image,contours,index,color,CV_FILLED,8,hierarchy);
   }
   imshow("Contours",contours_image);
  waitKey(0);
  
  





}
