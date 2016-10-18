#include<opencv2/core.hpp>
#include<opencv2/feature2d.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(){
  Mat trainImage=imread("1.jpg");
  Mat  trainImage_gray;
  imshow("src",trainImage);
  cvtcolor(trainImage,trainImage_gray,CV_BGR2GRAY);
  vector<KeyPonit> train_keyPoint;
  Mat trainDescription;
 SiftFeatureDetector featureDetector;
 featureDetector.detect(trainImage_gray,train_keyPoint);
 SiftDescriptorExtractor featureExtractor;
 featureExtractor.compute(trainImage_gray,train_keyPoint,trainDescription);
 BFMatcher matcher;
 vector<Mat> train_desc_collection(1,trainDescription);
 matcher.add(train_desc_collection);
 matcher.train();
 VideoCapture cap(0);
 unsigned int frameCount=0;
 while(char (waitKey(1))!='q')
{
   double time0=getTickCount();
   Mat captureImage,captureImage_gray;
  cap >> captureImage;
 if (captureImage.empty())
    continue;
 cvtColor(captureImage,captureImage_gray,CV_BGR2GRAY);
 vector<KeyPoint> test_keyPoint;
 Mat testDescriptor;
 featureDetector.detect(captureImage_gray,test_keyPoint);
 featureDetector.compute(captureImage_gray,test_keyPoint,testDescriptor);
 vector<vector<DMatch> > matches;
 matcher.knnMatch(testDescriptor,matches,2);
 vector<DMatch> goodMatches;
 for(unsigned int i= 0; i<mathces.size();i++)
 { 
   if (matches[i][0].distance<0.6*matches[i][1].distance)
         goodMatches.push_back(matches[i][0]);
      

}
 Mat dstImage;
  drawMatches(captureImage,test_keyPoint,trainImage,train_keyPoint,goodMatches,dstImage);
  imshow("dstImage",dstImage);
  
}
return 0;


}
