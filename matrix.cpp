#include<iostream>
#include<vector>
using namespace std;
template <typename Object>
class matrix
{

 public: 
    matrix(int rows,int cols):array(rows)
{

   for(int i=0;i<rows;i++)
{

   array[i].resize(cols);
}
};
  vector<Object> &operator[] (int row)
   {

  return array[row];

};
 

 int numrows()
{

  return array.size();

};

int numcols(){


  return numrows()?array[0].size():0;


};



private:
 vector<vector<Object> > array;

};




int main(){

  matrix<int> m(5,6);

  cout<<m.numrows<<endl;

}
