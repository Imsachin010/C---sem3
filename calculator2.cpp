#include <iostream>
using namespace std; 

int main() {
  int numberOne, numberTwo;
  double result;  
  string myChoice; 
  
  cout << "Enter your 1st number \n"; 
  cin >> numberOne; 
  cout << "Enter your 2nd number \n";
  cin >> numberTwo; 

  cout << "What would you like to do with these numbers: \n"; 
  cout << "add\n";
  cout << "subtract\n";
  cout << "multiply\n";
  cout << "divide\n";
  cin >> myChoice; 

  if(myChoice == "add"){
    cout << "You chose to add. \n";
    result = numberOne + numberTwo; 
    cout << "Result: " << result << "\n"; 
  }
  if(myChoice == "subtract"){
    cout << "You chose to subtract. \n";
    result = numberOne - numberTwo; 
    cout << "Result: " << result << "\n"; 
  }
  if(myChoice == "multiply"){
    cout << "You chose to multiply. \n";
    result = numberOne * numberTwo; 
    cout << "Result: " << result << "\n"; 
  }
  if(myChoice == "divide"){
    cout << "You chose to divide. \n";
    result = numberOne / numberTwo; 
    cout << "Result: " << result << "\n"; 
  }


}