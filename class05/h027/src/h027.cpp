//============================================================================
// Name        : h027.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int a[10][100] = {};
	int b[10][100] = {};
	vector<int> candidate;
	int s, t, n, m, r;
	cin >> s >> t >> n >> m >> r;
	int a_sum = 0;
	for(int i = 0; i < s; ++i){
		for(int j = 0; j < t ; ++j){
			int temp;
			cin >> temp;
			a[i][j] = temp;
			a_sum += temp;
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m ; ++j){
			cin >> b[i][j];
		}
	}
	for(int i = 0; i < n-s+1; ++i){
		for(int j = 0; j < m-t+1; ++j){
			int count = 0;
			int total = 0;
			for(int k = 0; k < s; ++k){
				for(int l = 0; l < t; ++l){
					if(a[k][l] != b[k+i][l+j])
						count++;
					total += b[k+i][l+j];
				}
			}
			if(count <= r){
				candidate.push_back(total);
			}
		}
	}


	cout << candidate.size() << "\n";
	int ans_min;
	if((int)candidate.size() < 1)
		cout << -1;
	else{
		for(int i = 0; i < (int)candidate.size(); ++i){
			if(i == 0)
				ans_min = abs(a_sum-candidate[i]);
			else
				if(abs(a_sum-candidate[i]) < ans_min)
					ans_min = abs(a_sum - candidate[i]);
		}
		cout << ans_min;
	}

	return 0;
}
