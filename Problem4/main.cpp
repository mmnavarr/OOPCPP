/*
	Malcolm Navarro
	CIS 554 - OOPCPP
	main.cpp

	Description: main file that will init a SelectionSort obj to start the tests comparing 
	array vs vector -- small vs large -- recursive vs iterate by calling the function begin()

*/

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
#include "SelectionSort.h"

//constants
const int small = 20;
const int large = 5000;

//create Arrays
int arrayS[small] = { 0 };
int arrayL[large] = { 0 };
//create vectors
vector<int> vecS(small);
vector<int> vecL(large);

//methods to print array + vectors
template<class T> 
void printData(T data, unsigned int size){
	for (int i = 0; i < size; i++)
		cout << data[i] << " ";	
	cout << endl;
}

//methods to print array + vectors
template<class T> 
void populateData(T &data, unsigned int size){
	for (int i = 0; i < size; i++)
		data[i] = rand()%100;
}

void populate(){
	//populate array then copy to vector
	populateData(arrayS, small);
	vecS.assign(arrayS, arrayS + small);
	//populate vector then copy to array
	populateData(vecL, large);
	copy(vecL.begin(), vecL.end(), arrayL);
}


int main()
{
	//get input for asceding or descending
	int direction = 0;
	while (direction != 1 && direction != 2){
		cout << "Press 1 for ascending -- Press 2 for descending. " << endl;
		cin >> direction;
	}

	//init SelectionSort class + begin tests
	SelectionSort select;


	//RECURSIVE selection sort
	populate();
	cout << "Selection Sort [recursive]: " << endl;
	//small array + vec
	printData(arrayS, small);
	select.recursiveSort(direction, arrayS, small, 0);
	printData(arrayS, small);
	printData(vecS, small);
	select.recursiveSort(direction, vecS, small, 0);
	printData(vecS, small);

	//large array + vec
	select.recursiveSort(direction, arrayL, large, 0);
	select.recursiveSort(direction, vecL, large, 0);

	//ITERATIVE selection sort
	populate();
	cout << "Selection Sort [iterative]: " << endl;
	//small array + vec
	printData(arrayS, small);
	select.iterativeSort(direction, arrayS, small);
	printData(arrayS, small);
	printData(vecS, small);
	select.iterativeSort(direction, vecS, small);
	printData(vecS, small);

	//large array + vec
	select.iterativeSort(direction, arrayL, large);
	select.iterativeSort(direction, vecL, large);


  return 0;
}


