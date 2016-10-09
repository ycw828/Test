#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
using namespace cv;
using namespace std;
Mat src,dst,local;
int  spataialRad=10,colorRad=10,maxPryLevel=1;

void meanshift_seg(int ,void*)
{
  pyrMeanShiftFiltering(src,dst,spataialRad,colorRad,maxPryLevel);
//  RNG rng=theRNG();
//  Mat mask(dst.rows+2,dst.cols+2,CV_8UC1,Scalar::all(0));
//  for (int i=0;i<dst.cols;i++)
//  {
//   for(int j=0;j<dst.rows;j++){
//   if(mask.at<char>(i+1,j+1)==0)
//    {

//    Scalar newcolor(rng(256),rng(256),rng(256));
//    floodFill(dst,mask,Point(i,j),newcolor,0,Scalar::all(1),Scalar::all(1));
    

//   }
//}
  
//}

//}

}
int main()
{


  namedWindow("src",WINDOW_AUTOSIZE);
  namedWindow("dst",WINDOW_AUTOSIZE);
  namedWindow("local",WINDOW_AUTOSIZE);
  src=imread("test.jpg");
  CV_Assert(!src.empty());
  spataialRad=10;
  colorRad=10;
  maxPryLevel=1;
  createTrackbar("spataialRad","dst",&spataialRad,80,meanshift_seg);
  createTrackbar("colorRad","dst",&colorRad,60,meanshift_seg);
  createTrackbar("maxPryLevel","dst",&maxPryLevel,5,meanshift_seg);
  imshow("src",src);
  imshow("dst",src);
  cv
  int blockSize=15;
  int constValue=10;
  Mat local;
  adaptiveThreshold(dst,local,255,CV_ADAPTIVE_THRESH_MEAN_C,CV_THRESH_BINARY_INV,blockSize,constValue);

 //  imshow("local",local);
  waitKey(0);
  return 0;

 // Mat srcImage= imread("test.jpg");
 // Mat gray;
 // cvtColor(srcImage,gray);
 // imshow("data",srcImage);
   
 // namedWindow("data");
 // waitKey(0);
 // printf("sdfsdfs"); 
 // return 0;

}
