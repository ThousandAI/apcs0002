//============================================================================
// Name        : h026.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main(){
	// h026 猜拳 2020-01
	int F, N;
	int tie = 0;
	cin >> F >> N;
	vector<int> v;
	for(int i = 0; i < N; ++i){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	for(int i = 0; i < N; ++i){
		if(v[i] != F){
			if(F == 0){
				if(v[i] == 2)
					cout << F << " : Won at round " << i+1;
				else if(v[i] == 5)
					cout << F << " : Lost at round " << i+1;
				break;
			}else if(F == 2){
				if(v[i] == 5)
					cout << F << " : Won at round " << i+1;
				else if(v[i] == 0)
					cout << F << " : Lost at round " << i+1;
				break;
			}else if(F == 5){
				if(v[i] == 0)
					cout << F << " : Won at round " << i+1;
				else if(v[i] == 2)
					cout << F << " : Lost at round " << i+1;
				break;
			}
		}else{
			if(i == N - 1){
				cout << F << " : Drew at round " << N;
			}
			else{
				cout << F << " ";
				tie += 1;
				if(tie == 2){
					if(v[i] == 0)
						F = 5;
					else if(v[i] == 2)
						F = 0;
					else if(v[i] == 5)
						F = 2;
					tie = 0;
				}
			}
		}
	}

}
