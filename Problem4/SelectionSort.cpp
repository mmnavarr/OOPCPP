/*
	Malcolm Navarro
	CIS 554 - OOPCPP
	SelectionSort.cpp

	Description: SelectionSort class with polymorphic methods to handle
	unsorted arrays as well as vector. Two methods are defined, one for
	recursive selection sort and the other for interative selection sort

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
#include "SelectionSort.h"


//constructor
SelectionSort::SelectionSort(){}


//recursive selection sort
void SelectionSort::recursiveSort(int d, int a[], int size, int startIndex){
	int iMin, temp;

	//check for end
	if (startIndex >= size - 1)
        return;
	iMin = startIndex;

    //loop through for mind value
    for (int i = startIndex + 1; i < size; i++){
        if(d == 1){
           	if (a[i] < a[iMin]) //if smaller then grab number (ascending)
               	iMin = i;
	    } else {
	       	if (a[i] > a[iMin]) //if bigger then grab number (descending)
	       		iMin = i;
	    }
    }

    //swap min element with start
    temp = a[startIndex];
    a[startIndex] = a[iMin];
    a[iMin] = temp;

    //loop back after swap at the next index and repeat
    recursiveSort(d, a, size, startIndex+1);
}
void SelectionSort::recursiveSort(int d, vector<int>& v, int size, int startIndex){
	int iMin, temp;

	//check for end
	if (startIndex >= size - 1)
        return;
	iMin = startIndex;

    //loop through for mind value
    for (int i = startIndex + 1; i < size; i++){
        if(d == 1){
           	if (v[i] < v[iMin]) //if smaller then grab number (ascending)
               	iMin = i;
	    } else {
	       	if (v[i] > v[iMin]) //if bigger then grab number (descending)
	       		iMin = i;
	    }
	} 

    //swap min element with start
    temp = v[startIndex];
    v[startIndex] = v[iMin];
    v[iMin] = temp;

    //loop back after swap at the next index and repeat
    recursiveSort(d, v, size, startIndex+1);
}



//iterative selection sort
void SelectionSort::iterativeSort(int d, int a[], int size){
    int iMin, temp; //min # and temp to swap

    //loop through array from a[0] to a[n-1]  
    for (int i = 0; i < size - 1; i++) {
        iMin = i;
        for (int j = i + 1; j < size; j++)
            if(d == 1){
            	if (a[j] < a[iMin]) //if smaller then grab number (ascending)
                	iMin = j;
        	} else {
        		if (a[j] > a[iMin]) //if bigger then grab number (descending)
        			iMin = j;
        	}

            if (iMin != i) {
            	//swap element
                temp = a[i];
                a[i] = a[iMin];
                a[iMin] = temp;
            }
      }
}
void SelectionSort::iterativeSort(int d, vector<int>& v, int size){
	int iMin, temp; //min # and temp to swap

    //loop through array from a[0] to a[n-1]  
    for (int i = 0; i < size - 1; i++) {
        iMin = i;
        for (int j = i + 1; j < size; j++)
            if(d == 1){
            	if (v[j] < v[iMin]) //if smaller then grab number (ascending)
                	iMin = j;
        	} else {
        		if (v[j] > v[iMin]) //if bigger then grab number (descending)
        			iMin = j;
        	}

            if (iMin != i) {
            	//swap element
                temp = v[i];
                v[i] = v[iMin];
                v[iMin] = temp;
            }
      }
}





