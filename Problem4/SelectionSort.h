/*
	Malcolm Navarro
	CIS 554 - OOPCPP
	main.cpp

	Description: SelectionSort header file that contains all
	public and private methods and global data types
*/


#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

class SelectionSort
{
	public:
		SelectionSort();
		void recursiveSort(int d, int a[], int size, int startIndex);
		void recursiveSort(int d, vector<int>& v, int size, int startIndex);
		void iterativeSort(int d, int a[], int size);
		void iterativeSort(int d, vector<int>& v, int size);
	
};