//============================================================================
// Name        : f605.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
	// f605 購買力 2021-01
	int total = 0;
	int total_price = 0;
	int row,target;
	cin >> row >> target;

	for(int i = 0; i < row; ++i){
		int min, max;
		int a, b, c;
		cin >> a >> b >> c;
		if(a >= b){
			max = a;
			min = b;
		}else{
			min = a;
			max = b;
		}
		if(c > max)
			max = c;
		else if(c < min)
			min = c;
		if(max - min >= target){
			total += 1;
			total_price += (a + b + c)/3;
		}
	}

	cout << total << " " << total_price;
}
