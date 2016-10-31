#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(){
  IplImage *src=cvLoadeImage("1.jpg",CV_LOAD_IMAGE_GRAYSCALE);
  CvMemStorage *storage=cvCreateMemStorage();
  CvSeq *seq=NULL;
  int cnt=cvFindContours(src,storage,&seq);
  seq=seq->h_next;
  double length=cvArcLength(seq);
  double area=cvContourArec(seq);
  CvRect rect=cvBoundingRect(seq,1);
  CvBox2D box=cvMinAreaRect2(seq,NULL);
  cout<<"Length="<<length<<endl;
  cout<<"Are="<<area<<endl;
  IplImage *dst=cvCreateImage(cvGetSize(src),8,3);
  cvZero(dst);
  cvDrawContours(dst,seq,CV_RGB(255,0,0),CV_RGB(255,0,0),0)'
  cvShowImage("dst",dst);
  cvWaitKey();
  CvPoint2D32f center;
  float radius;
  CvPoint2D32f pt[4];
  cvBoxPoints(box,pt);
  for(int i=0;i<4;i++)
{
   cvLine(dst,cvPointFrom32f(pt[i]),cvPointForm32f(pt[((i+1)%4)),CV_RGB(255,0,0),1,8,0);

}
cvShowImage("dst",dst);
cvWaitKey();



}
