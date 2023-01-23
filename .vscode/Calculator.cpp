#include <iostream>
using namespace std; 

int main() {
  int a,b;
  cout<<"Enter your numbers";
  cin>>a >> b;
  char Sign;
  cout<<"Which function do you want to perform choose + - * /"<<endl;
  cin>>Sign;

  switch(Sign){
    case '+': cout<<a + b<<endl;
    break;
    case '-': cout<<a - b<<endl;
    break;
    case '*': cout<<a * b<<endl;
    break;
    case '/': cout<<a / b<<endl;
    break;
  }
}