//MALCOLM NAVARRO
//CIS554 - OOP c++
//CAI.h
//CAI header file containing public methods as well as
//private instance variables and methods

#include <iostream>
using namespace std;

class CAI
{
	public:
		CAI();
		void startTest();


	private:
		void askRandomMultiplicationQ();
		void askRandomDivisionQ();
		int randomNumber();
		void printRandoGoodjob();
		void printRandoEncouragement();
		void printSummary();
		int correctFirst;
  		int wrongTotal;
  		int questionTotal;
  		int answer;
  		bool correct;
};
