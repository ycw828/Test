#include<iostream>
using namespace std;
int F(int x)
{
   if(x==0)
  {
  return 0;
}else{

return 2* F(x-1)+x*x;
}



}

int main(){

cout<<(F(3))<<endl;
return 0;



}
