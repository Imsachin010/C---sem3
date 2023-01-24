#include <iostream>
using namespace std; 

int main() {
  int dollars = 5; 

  while(dollars!=2){
    //buy a $1 ice cream 
    cout << "You just bought $1 ice cream. \n"; 
    dollars = dollars - 1; 
    cout << "You have $" << dollars << "\n";  
    cout<<"would you like to buy something else";
  }


}
