//============================================================================
// Name        : class04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void flip(int ans[10][10], int r, int c){
	int b[10][10] = {};
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			b[r-1-i][j] = ans[i][j];
		}
	}

	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < 10; ++j){
			ans[i][j] = b[i][j];
		}
	}
}


void rotate_couter_clockwise(int ans[10][10], int r, int c){
	int r_temp[10][10] = {};
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			r_temp[c-1-j][i] = ans[i][j];
		}
	}

	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < 10; ++j){
			ans[i][j] = r_temp[i][j];
		}
	}
}



int main() {

	int R, C, M;
	int ans[10][10] = {};
	int M_arr[10] = {};
	while(cin >> R >> C >> M){
		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				cin >> ans[i][j];
			}
		}
		for(int i = 0; i < M; ++i){
			cin >> M_arr[i];
		}

		for(int i = M-1; i > -1; --i){
			if(M_arr[i] == 0){
				rotate_couter_clockwise(ans, R, C);
				int temp = R;
				R = C;
				C = temp;
			}
			else if(M_arr[i] == 1)
				flip(ans, R, C);
		}
		cout << R << " " << C << "\n";
		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				if(j == C-1)
					cout << ans[i][j] ;
				else
					cout << ans[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}

/*

void transpose(int ans[5][5], int r, int c){
	int b[5][5] = {};
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			b[j][i] = ans[i][j];
		}
	}

	for(int i = 0; i < 5; ++i){
		for(int j = 0; j < 5; ++j){
			ans[i][j] = b[i][j];
		}
	}
}


void rotate_clockwise(int ans[5][5], int r, int c){
	int b[5][5] = {};
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			b[j][r-1-i] = ans[i][j];
		}
	}

	for(int i = 0; i < 5; ++i){
		for(int j = 0; j < 5; ++j){
			ans[i][j] = b[i][j];
		}
	}
}

 */


