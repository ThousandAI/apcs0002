//============================================================================
// Name        : f313.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;
int a[52][52] = {};
int b[52][52] = {};

void f(int i, int j, int x, string mode){
	if(mode == "u")
		b[i-1][j] += x;
	else if(mode == "l")
		b[i][j-1] += x;
	else if(mode == "d")
		b[i+1][j] += x;
	else if(mode == "r")
		b[i][j+1] += x;
	b[i][j] -= x;
}

int main() {
	int min = 101;
	int max = -1;
	int R, C, k, m;
	cin >> R >> C >> k >> m;

	for(int i = 0; i < 52; ++i){
		for(int j = 0; j < 52; ++j){
			a[i][j] = -1;
			b[i][j] = -1;
		}
	}

	for(int i = 1; i <= R; ++i){
		for(int j = 1; j <= C; ++j){
			cin >> a[i][j];
			b[i][j] = 0;
		}
	}
	for(int z = 0; z < m; ++z){
		for(int i = 1; i <= R; ++i){
			for(int j = 1; j <= C; ++j){
				if(a[i][j] != -1){
					int x = a[i][j] / k;
					if(x==0)
						continue;
					if(a[i-1][j] != -1)
						f(i, j, x, "u");
					if(a[i][j-1] != -1)
						f(i, j, x, "l");
					if(a[i+1][j] != -1)
						f(i, j, x, "d");
					if(a[i][j+1] != -1)
						f(i, j, x, "r");
				}
			}
		}
		for(int i = 1; i <= R; ++i){
			for(int j = 1; j <= C; ++j){
				if(a[i][j] != -1)
					a[i][j] += b[i][j];
			}
		}
		for(int i = 1; i <= R; ++i){
			for(int j = 1; j <= C; ++j){
				b[i][j] = 0;
			}
		}
	}

	for(int i = 1; i <= R; ++i){
		for(int j = 1; j <= C; ++j){
			if(a[i][j]!= -1 && a[i][j] < min)
				min = a[i][j];
			if(a[i][j] != -1 && a[i][j] > max)
				max = a[i][j];
		}
	}

	cout << min << endl;
	cout << max;


	return 0;
}
