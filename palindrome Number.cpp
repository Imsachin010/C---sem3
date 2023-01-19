#include <iostream>
using namespace std;
int main() {
  int n,r, sum = 0, tmp;
  cout<<"Enter number ";
  cin>>n;
  tmp = n;
  while(n > 0){
    r = n%10;
    sum = (sum*10)+r;
    n = n/10;
  }
  if (tmp == sum)
  {cout<<"palindrome number "<<endl;
    }
  else {cout<<"Not a palindrome number";}
  return 0;
}
