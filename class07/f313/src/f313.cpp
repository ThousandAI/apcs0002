//============================================================================
// Name        : f313.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;
int a[52][52];
int b[52][52];


int main(void){
	int min = 101;
	int max = -1;
	int R, C, k ,m;
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

	for(int l = 0; l < m; ++l){
		for(int i = 1; i <= R; ++i){
			for(int j = 1; j <= C; ++j){
				if(a[i][j] != -1){
					int x = a[i][j] / k;
					if(x == 0){
						continue;
					}
					if(a[i-1][j] != -1){
						b[i-1][j] += x;
						b[i][j] -= x;
					}
					if(a[i][j-1] != -1){
						b[i][j-1] += x;
						b[i][j] -= x;
					}
					if(a[i+1][j] != -1){
						b[i+1][j] += x;
						b[i][j] -= x;
					}
					if(a[i][j+1] != -1){
						b[i][j+1] += x;
						b[i][j] -= x;
					}
				}
			}
		}

		for(int i = 1; i <= R; ++i){
			for(int j = 1; j <= C; ++j){
				a[i][j] += b[i][j];
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
}
