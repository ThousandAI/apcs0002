//============================================================================
// Name        : g275.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		int a1[7];
		int a2[7];
		bool correctA = false;
		bool correctB = false;
		bool correctC = false;
		for(int j = 0; j < 7; ++j){
			cin >> a1[j];
		}

		for(int j = 0; j < 7; ++j){
			cin >> a2[j];
		}

		if((a1[1] != a1[3]) && (a1[1] == a1[5]) && (a2[1] != a2[3]) && (a2[1] == a2[5])){
			correctA = true;
		}else{
			cout << "A";
		}

		if((a1[6] == 1) && (a2[6] == 0)){
			correctB = true;
		}else{
			cout << "B";
		}


		if((a1[1] != a2[1]) && (a1[3] != a2[3]) && (a1[5] != a2[5])){
			correctC = true;
		}else{
			cout << "C";
		}

		if(correctA && correctB && correctC) cout << "None";
		cout << endl;
	}

}
