//MALCOLM NAVARRO
//CIS554 - OOP c++
//convert.cpp
//This is the Convert object class which has a method called converToDec
//which converts and number with base b to decimal form. Checks for invalid
//input in an if statement.


#include <iostream>
using namespace std;
#include <math.h>
#include "convert.h"

int Convert::convertToDec(int n, int b)
{
	int lastDigit;
	int answer = 0;
	int counter = 0;
	
	while ( n > 0 )
	{
		//STEP THROUGH
		lastDigit = (n % 10);
		n = (n / 10);
		
		//cout << "last digit: " << lastDigit << " -- n: " << n;
			
		//CHECK FOR INCORRECT INPUT
		if ( lastDigit >= b)
			return -1;
				
		//CONVERT TO DEC
		answer += (lastDigit * pow((double) b, (double) counter));
		
		counter++;
	}
	
	return answer;
}
