//============================================================================
// Name        : main.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



void bubble_sort(int numbers[12]){
	for(int i = 0; i < 11; ++i){
		for(int k = 0; k < 11; ++k){
			if(numbers[k] > numbers[k+1]){
				int temp = numbers[k];
				numbers[k] = numbers[k+1];
				numbers[k+1] = temp;
			}
		}
		for(int i = 0; i< 12; ++i){
			cout << numbers[i] << " ";
		}
		cout << "\n";
	}
}


int main() {
	int numbers[12] = {32, 58, 67, 100, 15, 82, 98, 50, 62, 97, 85, 93};

	// bubble sort
	bubble_sort(numbers);
}

















