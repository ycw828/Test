#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
using namespace cv;
int main()
{
  Mat srcImage= imread("test.jpg");
  Mat gray;
  cvtColor(srcImage,gray);
  imshow("data",srcImage);
   
  namedWindow("data");
  waitKey(0);
  printf("sdfsdfs"); 
  return 0;

}
