//============================================================================
// Name        : g595.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(void){
	int h[100] = {};
	int n;
	int total = 0;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> h[i];
	}
	for(int i = 0; i < n; ++i){
		if(h[i] == 0){
			if(i == 0)
				total += h[1];
			else if(i == n-1)
				total += h[n-2];
			else{
				if(h[i+1] > h[i-1])
					total += h[i-1];
				else
					total += h[i+1];
			}
		}
	}
	cout << total;
}
