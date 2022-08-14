//============================================================================
// Name        : b965.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

// b965 矩陣轉換
void flip(int ans[10][10], int r, int c){
	int temp[10][10] = {};
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			temp[r-1-i][j] = ans[i][j];
		}
	}
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			ans[i][j] = temp[i][j];
		}
	}
}

void rotate_counterclockwise(int ans[10][10], int r, int c){
	int r_temp[10][10] = {};
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			r_temp[c-1-j][i] = ans[i][j];
		}
	}

	for(int i = 0; i < c; ++i){
		for(int j = 0; j < r; ++j){
			ans[i][j] = r_temp[i][j];
		}
	}
}

int main(){
	int ans[10][10] = {};
	int m[10] = {};
	int R, C, M;
	while(cin >> R >> C >> M){
		// 初始化矩陣
		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				cin >> ans[i][j];
			}
		}
		for(int i = 0; i < M; ++i){
			cin >> m[i];
		}
		for(int i = M-1; i > -1; --i){
			if(m[i] == 1){
				flip(ans, R, C);
			}
			else if(m[i] == 0){
				rotate_counterclockwise(ans, R, C);
				int t = R;
				R = C;
				C = t;
			}
		}
		cout << R << " " << C << endl;
		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				if( j == C - 1)
					cout << ans[i][j] << "\n";
				else
					cout << ans[i][j] << " ";
			}
		}

	}
	return 0;
}
