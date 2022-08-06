//============================================================================
// Name        : b964.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// b964 成績指標 2016-03-05
	int n ;
	bool isBest = false;
	bool isWorst = false;
	int best, worst;
	cin >> n;
	vector<int> scores;
	for(int i = 0; i < n; ++i){
		int temp;
		cin >> temp;
		scores.push_back(temp);
	}

	sort(scores.begin(), scores.end());
	for(int i = 0; i < n; ++i){
		if(i != n-1)
			cout << scores[i] << " ";
		else
			cout << scores[i];
	}
	cout << "\n" ;
	if(scores[n-1] < 60){
		isWorst = true;
		best = scores[n-1];
	}else if(scores[0] >= 60){
		isBest = true;
		worst = scores[0];
	}else{
		for(int i = 0; i < n; ++i){
			if(scores[i] >= 60 && i > 0){
				worst = scores[i];
				best = scores[i-1];
				break;
			}
		}
	}
	if(isBest){
		cout << "best case\n";
		cout << worst;
	}else if(isWorst){
		cout << best << "\n";
		cout << "worst case";
	}else{
		cout << best << "\n";
		cout << worst << "\n";
	}
	return 0;
}
