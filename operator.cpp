#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
  Person(int age,string  name);
public:
 bool  operator==( const Person &rsh) const;
private:
  int age;
  string name;



};

Person::Person(int age,string name)
{
   this->age=age;
   this->name=name;

};
bool Person::operator==(const Person &pr) const{

   if(this->age==pr.age)
   {
      return true;
}
   else {
     return false;
}
}

int  main(){

Person  person(28,"ycw");
Person person1(28,"ycw1");

if(person==person1)
  cout<<"OK"<<endl;
else
  cout <<"NO"<<endl;

return 0;
}
