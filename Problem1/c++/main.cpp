//MALCOLM NAVAROO
//CIS544 - OOP c++
//main.cpp
//This is the main file - it creates takes input (number and base) 
//and creates Convert object and class the method to convert to decimal
//which returns the result. 

#include <iostream>
using namespace std;

#include "convert.h"

int main() 
{
  int number, base, answer;
  
  //RECEIVE INPUT
  cout << "Please enter an integer: ";
  cin >> number;
  
  cout << "Please enter the base of that integer: ";
  cin >> base;
  
  //CALL CONVERT
  Convert c; //create convert obj
  answer = c.convertToDec(number, base);
  
  //GIVE ANSWER
  if (answer != -1)
  	cout << "The given integer in decimal format is: " << answer << "." << endl;
  else 
  	cout << "The given integer " << number << " with base " << base << " is invalid." << endl;
  
  return 0;
}
