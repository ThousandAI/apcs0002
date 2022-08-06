//============================================================================
// Name        : class02.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;


//
//int main(){
//	int a1,b1,c1,a2,b2,c2,n;
//	int max;
//	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
//	for(int x2=0; x2<=n; ++x2){
//		if(x2 == 0)
//			max = (a1+a2)*(x2*x2)+(b2-2*n*a1-b1)*x2+(a1*(n*n)+b1*n+c1+c2);
//		else{
//			int temp = (a1+a2)*(x2*x2)+(b2-2*n*a1-b1)*x2+(a1*(n*n)+b1*n+c1+c2);
//			if(temp >= max)
//				max = temp;
//		}
//	}
//	cout << max;
//}















// APCS c290
/*
int main(){
	string number;
	cin >> number;
	int t1 = 0;
	int t2 = 0;
	for(int i = 0; i < number.size(); ++i){
		if(i % 2 == 0)
			t1 += (int)number[i] - '0';
		else
			t2 += (int)number[i] - '0';
	}
	cout << abs(t1-t2);

	return 0;
}
*/

// APCS c294
/*
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int max, mid, min;
	if(a >= b){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}

	if(c >= max){
		mid = max;
		max = c;
	}else if(c < min){
		mid = min;
		min = c;
	}else{
		mid = c;
	}

	cout << min << " " << mid << " " << max << endl;

	if(min + mid <= max){
		cout << "No";
	}else if(min*min + mid*mid == max*max){
		cout << "Right";
	}else if(min*min + mid*mid < max*max){
		cout << "Obtuse";
	}else{
		cout << "Acute";
	}
	return 0;
}
*/


//
//int main() {
//	// 2維陣列
////	int scores[3][2] = {{2, 3}, {5, 7}, {7, 8}};
////
////	cout << scores[0][0] << "\n";
////	cout << scores[0][1] << "\n";
////	cout << scores[1][0] << "\n";
////	cout << scores[1][1] << "\n";
////	cout << scores[2][0] << "\n";
////	cout << scores[2][1] << "\n";
//
//
////	for(int i = 0; i < 3; ++i){
////		for(int j = 0; j < 2; ++j){
////			if(j == 1)
////				cout << scores[i][j] << "\n";
////			else
////				cout << scores[i][j] << " ";
////		}
////	}
//
//
//
////	cout << "整個矩陣的記憶體位置: " << scores << " " <<scores[0] << " " << &scores[0][0] << endl;
////	cout << "第 0 row 0 column 的記憶體位置: " << scores[0] << " "<< &scores[0][0] << endl;
////	cout << "第 1 row 0 column 的記憶體位置: " << scores[1] << " "<< &scores[1][0] << endl;
////	cout << "第 2 row 0 column 的記憶體位置: " << scores[2] << " "<< &scores[2][0] << endl;
//
///*
//
//	for(int i = 0; i < 3; ++i){
//		for(int j = 0; j < 2; ++j){
//			cout << &scores[i][j] << endl;
//		}
//	}
//
//
//	// 2維矩陣 解答 1-1
//
//	int scores[5][5] = {0};
//	int r, c;
//	cin >> r >> c;
//	for(int i = 0; i < r; ++i){
//		for(int j = 0; j < c; ++j){
//			int temp;
//			cin >> temp;
//			scores[i][j] = temp;
//		}
//	}
//
//	for(int i = 0; i < r; ++i){
//		for(int j = 0; j < c; ++j){
//			if(j == c - 1)
//				cout << scores[i][j] << "\n";
//			else
//				cout << scores[i][j] << " ";
//		}
//	}
//
//
//
//	vector< vector<int> > scores;
//	int r, c;
//	cin >> r >> c;
//	for(int i = 0; i < r; ++i){
//		vector<int> vt;
//		for(int j = 0; j < c; ++j){
//			int temp;
//			cin >> temp;
//			vt.push_back(temp);
//		}
//		scores.push_back(vt);
//	}
//
//	for(int i = 0; i < (int)scores.size(); ++i){
//		for(int j = 0; j < (int)scores[0].size(); ++j){
//			if(j == c - 1)
//				cout << scores[i][j] << "\n";
//			else
//				cout << scores[i][j] << " ";
//		}
//	}
//	*/
//	int scores[12] = {15, 23, 26, 32, 38, 52, 56, 78, 80, 82 85, 98};
//
//
//
//}


int main(){
	int scores[12] = {15, 23, 26, 32, 38, 52, 56, 78, 80, 82, 85, 98};
	int high = 11;
	int low = 0;
	int mid = (high+low)/2;
	int target;
	cin >> target;
	while(high >= low){
		if(scores[mid] == target){
			cout << mid;
			break;
		}else if(scores[mid] > target){
			high = mid - 1;
			mid = (high+low)/2;
		}else if(scores[mid] < target){
			low = mid + 1;
			mid = (high+low)/2;
		}
	}
	cout << high + 1;
}

















