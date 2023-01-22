#include <iostream>
using namespace std; 

//This function takes two double values 
//and figures the change amount from a sell. 
double giveChange(int total, int payment){
  double sum; 
  
  sum = payment - total; 
  return sum; 
}

int main() {
  double myTotal,myPayment,change;
  bool loopCheck = true; 

  cout << "Store Opening!" <<endl; 

  while(loopCheck){
    cout << "Enter total of the purchase:" <<endl; 
    cin >> myTotal;
    cout << "Enter 0 if you want to end program." <<endl; 

    if(myTotal == 0){
      loopCheck = false; 
    }
    else{
      cout << "Enter the customers payment:" <<endl; 
      cin >> myPayment;//This amount is always greater than 'myTotal'  

      change = giveChange(myTotal, myPayment);
      cout << "Change Due: " << change <<endl; 
    }
  }

  cout << "Closing Time!" <<endl; 

}