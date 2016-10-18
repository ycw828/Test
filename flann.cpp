#include<opencv2/core.hpp>
#include<opencv2/feature2d.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(){
  Mat img_1=imread("",CV_LOAD_IMAGE_GRAYSCALE);
  Mat img_2=imread("",CV_LOAD_IMAGE_GRAYSCALE);
  int minHession=400;
  SurfFeatureDetector detector(minHession);
  vector<KeyPoint> keyPoints1,keyPoints2;
  detector.detect(img_1,keyPoint1);
  detector.detect(img_2,keyPoint2);
  SurfDescriptorExtractor extractor;
  Mat descriptors_1,descriptor_2;
  extractor.compute(img_1,keyPoints1,descriptors_1);
  extrcator.compute(img_2,keyPoints2,descriptors_2);
  FlannBasedMatcher matcher;
  vector<DMatch> matches;
  matcher.match(descriptors_1,descriptors_2,mathces);
  double max_dist=0;double min_dist=100;
  for(int i=0;i<descriptors_1.rows;i++)
   {
   double dist=maches[i].distance;
   if (dist<min_dist)
      min_dist=dist;
   if (dist>max_dist)
     max_dist=dist;
  


}
 vector<DMatch> good_matches;
  for(int i=0;i<decriptors_1.rows;i++)
  {
     if(mathces[i].distance<2*min_dist)
  {
    good_matches.push_back(matches[i]);
}

}
Mat img_mathces;
drawMatches(img_1,keyPoints1,img_2,keyPoints2,good_matches,img_matches,Scalar::all(-1),Scalar::all(-1),vector<char>(),DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS);
  imshow("img_matches",img_matches);
    
waitKey(0);
 return 0;


}
