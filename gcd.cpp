#include<iostream>
using namespace std;
long gcd(long m,long n)
{
   while(n!=0)
  {
   long rem=m%n;
   m=n;
   n=rem;

}

return m;
}
int main(){

cout<<  gcd(12,50)<<endl;


}
