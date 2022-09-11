//============================================================================
// Name        : g276.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int result = 0;
	int a[100][100] = {};
	int karr[500][4] = {};
	int ksurvive[500] = {};
	int n, m, k;
	cin >> n >> m >> k;
	for(int i = 0; i < k; ++i){
		ksurvive[i] = 1;
		for(int j = 0; j < 4; ++j){
			cin >> karr[i][j];
		}
	}
	while (true){
		int temp = 0;
		for(int i = 0; i < k; ++i){
			temp += ksurvive[i];
		}
		if(temp == 0) break;

		for(int i = 0; i < k; ++i){
			if(ksurvive[i] == 0) continue;
			int x = karr[i][0];
			int y = karr[i][1];
			a[x][y]++;
			karr[i][0] += karr[i][2];
			karr[i][1] += karr[i][3];
		}

		for(int i = 0; i < k; ++i){
			if(ksurvive[i] == 0) continue;
			int x = karr[i][0];
			int y = karr[i][1];


			if(x >= n || y >= m || x < 0 || y < 0){
				ksurvive[i] = 0;
				continue;
			}

			if(a[x][y] != 0) {
				ksurvive[i] = 0;
				a[x][y] = -1;
			}

		}

		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				if(a[i][j] == -1){
					a[i][j] = 0;
				}
			}
		}

	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(a[i][j] != 0){
				result++;
			}
		}
	}
	cout << result;


	return 0;
}
