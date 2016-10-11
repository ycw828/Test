#include<math.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int> squares(100);

  for(int i=0;i<squares.size();i++)
{

  squares[i]=pow(2,i);
  

}
  for(int i=0;i<squares.size();i++)
      cout<<i<<"   "<<squares[i]<<endl;

}
