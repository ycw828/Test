#include<iostream>
#include<vector>
#include<string>
using namespace std;
template <typename Comparable>
 Comparable & findMax(vector<Comparable> &a)
{
 cout<<a.size()<<endl;
int maxindex=0;
 for(int i=1;i<a.size();i++)
{
 
  if(a[maxindex]<a[i])
{
   maxindex=i;
   

}
}
a[maxindex].print();
return a[maxindex];
}
class Employee
{
  public:
   void setValue( string n,double s){

    name=n;
    salary=s;


}
  string getName(){
   return name;

 }
   void print()
 {
 cout<<name<<"  "<<salary<<endl;

}
   bool operator<(Employee &rhs){
  return this->salary<rhs.salary;

}
private:
 string name;
  double salary;

};

// ostream & operator << (ostream &out , Employee &rhs)
//{
//   rhs.print(out);
 ///  return out;

//}
int main(){

 vector<Employee> v(3);
 v[0].setValue("George Bush",40000);
 v[1].setValue("Bill Gates",300000);
 v[2].setValue("Dr.Phil",1300000000);
 findMax(v);
// vector <int> v(3);
//  v[0]=10;
//  v[1]=9;
//  v[2]=15; 
// cout<<findMax(v)<<endl;


}
