#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/feature2d.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(){
  Mat srcImage=imread("1.jpg");
  imshow("srcImage",srcImage);
  Mat grayImage;
  cvtColor(srcImage,grayImage,CV_BGR2GRAY);
  OrbFeatureDetector featureDetector;
  vector<KeyPoint> keyPoints;
  Mat descriptors;
  featureDetector.detect(grayImage,keyPoints);
  OrbDescriptorExtractor featureExtractor;
  featureExtractor.compute(grayImage,keyPoints,descriptors);
   flann::index flannIndex(descriptors,flann::LshIndexParams(12,20,2),cvflann::FLANN_DIST_HAMMING);
   VideoCapture cap(0);
  cap.set(CV_CAP_PROP_FRAME_WIDTH,360);
  cap.set(CV_CAP_PROP_FRAME_HEIGHT,900);
  unsigned int frameCount=0;
  while(1)
{
   double time0=static_cast<double>getTickCount());
   Mat captureImage , captureImage_gray;
   cap >> captureImage;
   if (captureImage.empty())
      continue;
    cvtColor(captureImage,captureImage_gray,CV_BGR2GRAY);
    vector<KeyPoint> captureKeyPoints;
    Mat captureDescription;
    featureDetector.detect(captureImage_gray,captureKeyPoints);
   featureExtractor.compute(captureImage_gray,captureKeyPoints,captureDescription);
   Mat matchIndex(captureDescription.rows,2,CV_32SC1),


}



}
