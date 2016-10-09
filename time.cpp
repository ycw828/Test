#include<iostream>
#include<unistd.h>
#include<ctime>
using namespace std;
int  main(){

 time_t start_time;
start_time=time(NULL);

int n=100000000/5;
sleep(5);
time_t end_time;
end_time=time(NULL);
cout<<end_time-start_time;

return 0;
}
