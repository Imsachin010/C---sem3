#include <iostream>
using namespace std;
int main() {
  int rows,cols;
  cout<<"Rectangle Pattern";
  cout<<"Enter No of rows";
  cin>>rows;
  cout<<"Enter No of Columns";
  cin>>cols;
  for (int i=0; i <rows; i++)
    {
      for(int j=0; j<cols; j++){
        if (i == 0 || i == rows-1){
          cout<<"x"<<"";
        }
        else
        {
          if (j == 0 || j == cols-1){
            cout<<"x";
          }
          else
          {
            cout<<" ";
          }
        }
  
      }
      cout<<"\n";
    }
  return 0;
}