#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/features2d.hpp>
#include<opencv2/nonfree.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(){
   

 Ptr<DescriptorMatcher> shiftMatcher=DescriptorMatcher::create("BruteForce");
 SiftFeatureDetector  shiftDetector;
 Mat img1=imread("box.png");
 Mat img2=imread("box2.png");
 vector<KeyPoint> keypoint1,keypoint2;
 siftDetector.detect(img1,keypoint1);
 siftDetector.detect(img2,keypoint2);
 cout<<"Number of img1"<<keypoint1.size()<<"Number of img2"<<keypoint2.size()<<endl;
 SiftDetectorExtractor siftExtractor;
 Mat descript1,descript2;
 siftExtractor.compute(img1,keypoint1,descriptor1);
 siftExtractor.compute(img2,keypoint2,descroptor2);
 cout<<"Number of Descriptors1"<<descript1.rows<<endl;
 cout<<"Number of Descriptors2"<<descript2.row2<<endl;
 cout<<"Number of Demension of shift Descriptors"<<descriptor1.cols<<endl;
 Mat imgkey1,imgkey2;
 drawKeypoints(img1,keypoints1,imgkey1,Scalar::all(-1));
 drawKeypoints(img2,keypoints2,imgkey2,Scalar::all(-1));
 imshow("box",imgkey1);
 imshow("box_in_scene",imgkey2);
 vector<DMatch> matches;
 siftMacher.match(descriptor1,descriptor2,matches,Mat());
 Mat imgmatches;
 drawMatches(img1,keypoint1,img2,keypoint2,matches,imgmatches,Scalar::all(-1),Scalar::all(-1),vector<char>(),DreawMatchersFlgas::NOT_DRAW_SINGLE_POINTS);
 imshow("Match result",imgmatches);
 waitKey(0);
 return 0;
 



}
