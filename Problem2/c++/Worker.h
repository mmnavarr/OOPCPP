//MALCOLM NAVARRO
//CIS554 - OOP c++
//Worker.cpp
//The Worker header containing all the public methods being used to calculate
//the salary as well as private instance doubles to store earnings per worker type
//so we can display a barchart later

class Worker
{
	public:
		Worker();
		void accountantGoToWork();
		void calcManager();
		void calcHourly();
		void calcCommish();
		void calcPiece();
	private:
		void showBarchart();
		void printAsterisk(int);
		double managerEarnings;
		double hourlyEarnings;
		double commishEarnings;
		double piecesEarnings;
};
