//============================================================================
// Name        : f606.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a[50][50];
	int city[50][50];
	int n, m, k;
	int mincost = 0;
	cin >> n >> m >> k;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < m; ++j){
			city[i][j] = 0;
		}
	}

	for(int c = 0; c < k; ++c){
		int cost = 0;
		for(int i = 0; i < n; ++i){
			int temp;
			cin >> temp;
			for(int j = 0; j < m; ++j){
				city[temp][j] += a[i][j];
			}
		}
		for(int i = 0; i < m; ++i){
			for(int j = 0; j < m; ++ j){
				if(i == j){
					cost += city[i][j];
				}
				else{
					if(city[i][j] > 1000){
						int x = city[i][j] - 1000;
						cost += 2*x + 3000;
					}else{
						cost += 3*city[i][j];
					}
				}
			}
		}
		if(c == 0){
			mincost = cost;
		}else{
			if(cost < mincost){
				mincost = cost;
			}
		}

		for(int i = 0; i < m; ++i){
			for(int j = 0; j < m; ++j){
				city[i][j] = 0;
			}
		}
	}
	cout << mincost;
}
