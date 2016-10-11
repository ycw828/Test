#include<iostream>
#include<vector>
using namespace std;

int maxSubSum(const vector<int> & a )
{

  int maxSum=0;
   for (int i=0;i<a.size();i++)
{

  int thisSum=0;
  for(int j=i;j<a.size();j++)
{

  thisSum+=a[j];
  if(thisSum>maxSum)
     maxSum=thisSum;

}

}
return maxSum;
}
int maxSubSum2(vector <int > &a)
{
   int maxSum=0;int thisSum=0;
  for(int i=0;i<a.size();i++)
{

    thisSum+=a[i];
   if(thisSum>maxSum)
      maxSum=thisSum;
    else if(thisSum<0)
       thisSum=0;
}
  return maxSum;
}



int main(){

  vector<int> data(6);

   data[0]=-2;
   data[1]=11;
   data[2]=-4;
   data[3]=13;
   data[4]=-5;
   data[5]=-2;
  cout<< maxSubSum(data)<<endl;
   cout<< maxSubSum2(data)<<endl;
}
