#include<iostream>
using namespace std;
template <typename Container>
void removeEveryOtherItem( Container &lst)
{
typename Container::iterator itr=lst.begin();
  while(itr!=lst.end())
  { itr=lst.erase(itr);
  if(itr!=lst.end()){
    ++itr;
}
}
}



void printCollection(const Container&c)
{

  if(c.empty()) 
      cout<<"(empty)";
  else {

   typename Container::const_iterator itr=c.begin();
    cout<<"["<<*itr++;
   while(itr!=c.end())
     cout<<","<<*itr++;
   cout<<"]"<<endl;

}

}
int main(){





}
