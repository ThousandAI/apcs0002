//============================================================================
// Name        : class02.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// APCS c294
	int a, b, c;
	cin >> a >> b >> c;
	int max, mid, min;
	if(a >= b){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}

	if(c >= max){
		mid = max;
		max = c;
	}else if(c < min){
		mid = min;
		min = c;
	}else{
		mid = c;
	}

	cout << min << " " << mid << " " << max << endl;

	if(min + mid <= max){
		cout << "No";
	}else if(min*min + mid*mid == max*max){
		cout << "Right";
	}else if(min*min + mid*mid < max*max){
		cout << "Obtuse";
	}else{
		cout << "Acute";
	}

}
