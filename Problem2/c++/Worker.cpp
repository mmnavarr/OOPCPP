//MALCOLM NAVARRO
//CIS554 - OOP c++
//Worker.cpp
//The worker object will do all the work to get the paycode then determine which type of
//input its going to request to do the respective calculations for output
//In addition, it'll save the result of the salary in an instance var for the bar chart

#include <iostream>
#include <iomanip>
using namespace std;
#include "Worker.h"

//CONSTRUCTOR
Worker::Worker(){
  managerEarnings = 0;
  hourlyEarnings = 0;
  commishEarnings = 0;
  piecesEarnings = 0;
}

//CALCULATES SALARY BASED ON PAYCODE (p)
void Worker::accountantGoToWork(){
  while (true) {
    
    //GET PAYCODE
    int paycode;
    cout << "Enter paycode (-1 to end): ";
    cin >> paycode;

    //IF -1 THEN BE OUT
    if (paycode == -1){
      cout << endl;
      break;
     }


    //FIND WHICH WORKER IT IS
    switch(paycode) {
    case 1: //manager
      cout << "Manager selected." << endl;
      calcManager();
      break;
    case 2: //hourly worker
      cout << "Hourly worker selected." << endl;
      calcHourly();
      break;
    case 3: //commission worker
      cout << "Commission worker selected." << endl;
      calcCommish();
      break;
    case 4: //piece worker
      cout << "Piece worker selected." << endl;
      calcPiece();
      break;
    default:
      cout << "Please enter a valid paycode this time." << endl;
      break;
    }
  }

  //-1 WAS GIVEN NOW SHOW BARCHART
  showBarchart();
}


void Worker::calcManager(){
  double weeklySalary;

  //GET MANAGER INPUT + DISPLAY INPUT + ADD TO INSTANCE WORKER TOTAL
  cout << "Enter weekly salary: ";
  cin >> weeklySalary;
  cout << "Manager's pay is $" << setprecision (2) << fixed << weeklySalary << endl << endl;
  
  managerEarnings += weeklySalary;
}


void Worker::calcHourly(){
  double hourlySalary, hoursWorked, weeklySalary;
  
  //GET HOURLY WORKER INPUT
  cout << "Enter the hourly salary: ";
  cin >> hourlySalary;
  cout << "Enter the total hours worked: ";
  cin >> hoursWorked;
  
  //COMPUTE FOR 40 AND FOR 40 PLUS OVERTIME IF NEEDED + DISPLAY + ADD TO HOURLY WORKER TOTAL
  if (hoursWorked <= 40){
    weeklySalary = hourlySalary * hoursWorked;
  } else {
    weeklySalary = hourlySalary * 40;
    weeklySalary += (hourlySalary * 1.5) * (hoursWorked - 40);
  }
  cout << "Hourly worker's pay is $" << setprecision (2) << fixed << weeklySalary << endl << endl;

  hourlyEarnings += weeklySalary;
}


void Worker::calcCommish(){
  int grossSales;
  double weeklySalary = 250;
  
  //GET COMMISSION WORKER INPUT
  cout << "Enter gross weekly sales: ";
  cin >> grossSales;

  //INITIAL 250 + COMMISSION THEN SHOW SALARY THEN ADD TO COMMISH WORKER TOTAL
  weeklySalary += (.057 * grossSales);
  cout << "Commission worker's papy is $" << setprecision (2) << fixed << weeklySalary << endl << endl;
  
  commishEarnings += weeklySalary;
}


void Worker::calcPiece(){
  double piecesSold, piecePrice, weeklySalary;

  //GET PIECES WORKER INPIT
  cout << "Enter the number of pieces sold: ";
  cin >> piecesSold;
  cout << "Enter the wage per piece: ";
  cin >> piecePrice;
  weeklySalary = piecesSold * piecePrice;

  //CALCULATE WAGE + DISPLAY + ADD TO PIECE WORKER TOTAL
  cout << "Piece worker's pay is $" << setprecision (2) << fixed << weeklySalary << endl << endl;

  piecesEarnings += weeklySalary;
}




//DISPLAYS BARCHART OF EARNINGS BY DIV EARNINGS by 100
void Worker::showBarchart(){
	int asterisk;

	asterisk = managerEarnings / 100;
	cout << "Managers      ";
	printAsterisk(asterisk);
	cout <<endl;

	asterisk = hourlyEarnings / 100;
	cout << "Hourly        ";
	printAsterisk(asterisk);
	cout << endl;
	
	asterisk = commishEarnings / 100;
	cout << "Commission    ";
	printAsterisk(asterisk);
	cout <<endl;

	asterisk = piecesEarnings / 100;
	cout << "Pieceworker   ";
	printAsterisk(asterisk);
	cout <<endl;
}

//METHOD TO PRINT NECESSARY # OF ASTERISKS 
void Worker::printAsterisk(int n) {
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
}
