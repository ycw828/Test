#include<opencv2/core.cpp>
#include<opencv2/highui.cpp>
#include<iostream>
using namespace std;
using namespace cv;
Mat g_srcImage;
Mat g_grayImage;
int g_nThresh=100;
int g_nMaxThresh=255;
RNG g_rng(12345);
Mat g_cannyMat_output;
vector<vector<Point>> g_vContours;
vector<Vec4i> g_vHierarchy;
void on_ThreshChange(int ,void*);
static void ShowHelpText();

int main(){
   g_srcImage=imread("1.jpg",1);
   cvtColor(g_srcImage,g_grayImage,COLOR_BGR2GRAY);
   blur(g_grayImage,g_grayImage,Size(3,3));
   imshow("srcImage",g_srcImage);
   createTrackbar("ThreshHold","srcImage",&g_nThresh,g_nMaxThreah,on_ThreshChange);
   on_ThreshChange(0,0);
   waitKey(0);
   return 0;



}
void on_ThreshChange(int,void*){
  Canny(g_grayImage,g_cannyMat_output,g_nThresh,g_nThresh*2,3);
  findContours(g_cannyMat_output,g_vContours,g_vHierarchy,RETR_TREE,CHAIN_APPROX_SIMPLE,Point(0,0);
 vector<Moments> mu(g_vContours.size());
 for(unsigned int i=0;i<g_vContours.size();i++ )
{
    mu[i]=moments(g_vContours[i],false);

}
vector<Point2f> mc(g_cContours.size());
 for(unsigned int i=0;i<g_vContours.size();i++)
 
}



}
