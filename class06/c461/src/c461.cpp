//============================================================================
// Name        : c461.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, result;
	cin >> a >> b >> result;
	if((a & b) == result){
		cout << "AND" << endl;
	}
	cout << (4 & 9) ;

	return 0;
}

