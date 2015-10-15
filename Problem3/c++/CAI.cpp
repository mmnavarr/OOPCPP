//MALCOLM NAVARRO
//CIS554 - OOP c++
//CAI.cpp
//DESCRIPTION

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "CAI.h"

using namespace std;

//CONSTRUCTOR
CAI::CAI()
{
  correctFirst = 0;
  wrongTotal = 0;
  questionTotal = 0;
  answer = 0;
  correct = false;
}

//BEGIN ASKING 10 QUESTIONS TO STUDENT
void CAI::startTest()
{

	for (int i = 0; i < 10; i++){
		correct = false;
		//ALT BETWEEN MULT n DIV Qs
		if (i%2 == 0)
			askRandomMultiplicationQ();
		else
			askRandomDivisionQ();
	}

	//PRINT SUMMARY OF QUESTION RESULTS
	printSummary();
}

//ASK QUESTION W GENERATED #'s
//LOOP TILL ANSWERED CORRENTLY
//INCR Q tally + wrongTotal + attempts etc
void CAI::askRandomMultiplicationQ() {
	int attempt = 1;
	int a = randomNumber();
	int b = randomNumber();
	answer = a * b;
	questionTotal++;

	while (!correct){
		int input;
		cout << "How much is " << a << " times " << b << "?" << endl;
		cin >> input;

		if (input == answer && attempt == 1) {
			correct = true;
			correctFirst++;
			printRandoGoodjob();
		} else if (input == answer) {
			correct = true;
			printRandoGoodjob();
		} else {
			wrongTotal++;
			attempt++;
			printRandoEncouragement();
		}
	}
}

//ASK QUESTION W GENERATED #'s
//LOOP TILL ANSWERED CORRENTLY
//INCR Q tally + wrongTotal + attempts etc
void CAI::askRandomDivisionQ() {
	int attempt = 1;
	int a = randomNumber();
	int b = randomNumber();
	answer = a / b;
	questionTotal++;
	
	while (!correct){
		int input;
		cout << "How much is " << a << " div " << b << "?" << endl;
		cin >> input;

		if (input == answer && attempt == 1) {
			correct = true;
			correctFirst++;
			printRandoGoodjob();
		} else if (input == answer) {
			correct = true;
			printRandoGoodjob();
		} else {
			wrongTotal++;
			attempt++;
			printRandoEncouragement();
		}
	}
}


//RANDOM # [1..10]
int CAI::randomNumber() {
	int r = (rand() % 9) + 1;
	return r;
}

//SWITCH TO CONTROL RANDOM GOOD JOB OR ENCOURAGEMENT STATEMENTS
void CAI::printRandoGoodjob() {
	int r = (rand() % 4);

	switch(r){
		case 0:
			cout << "Very good!" << endl;
			break;
		case 1:
			cout << "Excellent!" << endl;
			break;
		case 2:
			cout << "Nice work!" << endl;
			break;
		case 3:
			cout << "Keep up the good work!" << endl;
			break;
		default:
			cout << "Nice!" << endl;
			break;
	}
}
void CAI::printRandoEncouragement() {
	int r = (rand() % 4);

	switch(r){
		case 0:
			cout << "No. Please try again" << endl;
			break;
		case 1:
			cout << "Wrong. Try once more." << endl;
			break;
		case 2:
			cout << "Don't give up!" << endl;
			break;
		case 3:
			cout << "No. Keep trying." << endl;
			break;
		default:
			cout << "Botch." << endl;
			break;
	}
}


//DISPLAY SUMMARY OF TEST
void CAI::printSummary() {
	cout << endl << "These are your results: " << endl;

	int avg = wrongTotal/questionTotal;
	cout << "You got " << correctFirst << " questions correct on the first attempt." << endl;
	cout << "It took you on average " << avg << " tries to get a question correct." << endl;
}






