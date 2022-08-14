//============================================================================
// Name        : c295.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <vector>
using namespace std;

// c295 最大和 2016-1029
int main(void){
	int max_arr[20] = {};
	vector<int> ans;
	bool is_divisible = false;
	int N, M;
	cin >> N >> M;
	int total = 0;
	for(int i = 0; i < N; ++i){
		int max = 1;
		for(int j = 0; j < M; ++j){
			int temp;
			cin >> temp;
			if(temp >= max)
				max = temp;
		}
		total += max;
		max_arr[i] = max;
	}

	cout << total << "\n";
	for(int i = 0; i < N; ++i){
		if(total % max_arr[i] == 0)
			ans.push_back(max_arr[i]);
	}
	if(ans.size() > 0){
		for(int i = 0; i < ans.size(); ++i){
			if(i == ans.size()-1)
				cout << ans[i];
			else
				cout << ans[i] << " ";
		}
	}else{
		cout << -1;
	}
	return 0;
}
