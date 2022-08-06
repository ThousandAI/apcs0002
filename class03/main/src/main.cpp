//============================================================================
// Name        : main.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// bubble sort
	int numbers[12] = {32, 58, 67, 100, 15, 82, 98, 50, 63, 97, 85, 93};
	for(int i = 0; i < 12; ++i){
		for(int j = 0; j < 11; ++j){
			if(numbers[j] > numbers[j+1]){
				int temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
		}
		for(int k = 0; k < 12; ++k){
			cout << numbers[k] << " ";
		}
		cout << "\n";
	}
}
