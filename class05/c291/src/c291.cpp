//============================================================================
// Name        : c291.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(void){
	int a[50000] = {};
	bool b[50000] = {};
	int N;
	int ans = 0;
	cin >> N;
	for(int i = 0; i < N; ++i){
		cin >> a[i];
		b[i] = false;
	}
	for(int i = 0; i < N; ++i){
		if(b[i] == false){
			int k = i;
			while(b[k] == false){
				b[k] = true;
				k = a[k];
			}
			ans++;
		}
	}
	cout << ans;

	return 0;
}
