#include <iostream>
using namespace std;

int main()
{
  int sec;
  cout<<"Enter number of seconds :";
  cin>>sec;
  int hour;
  hour = sec/3600;
  sec -= 3600*hour;
  int minute = sec/60;
  sec -= 60*minute;
  cout<<"Hour:"<<hour<<endl; 
  cout<<"Minute:"<<minute<<endl; 
  cout<<"seconds:"<<sec<<endl; 
}