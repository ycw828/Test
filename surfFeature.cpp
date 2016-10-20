#include<opencv2/core.hpp>
#include<opencv2/feature2d.hpp>
#include<opencv2/nonfree.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(){
   Mat src = imread("1.jpg");
   Mat dist = imread("2.jpg");
   imshow("src",src);
   imshow("dist",dist);
   int minHessian=400;
   SurfFeatureDetector detector(minHessian);
   SurfFeatureDetector(SURF);
   vector<KeyPoint> keypoint1,keypoint2;
   detector.detect(src,keypoint1);
   detector.detect(dist,keypoint2);
   Mat img_keypoints_1;
   Mat img_keypoints_2;
   drawKeypoints(src,keypoint1,img_keypoints_1,Scalar::all(-1),DrawMatchesFlaggs::DEFAULT);
   drawKeypoints(dist,keypoint2,img_keypoints_2,Scalar::all(-1),DrawMatchesFlags::DEFAULT);
imshow("feature1",img_keypoints_1);
imshow("feature2",img_keypoints_2);
waitKey(0);
 return 0;



}
