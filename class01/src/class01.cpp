//============================================================================
// Name        : class01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

	// 輸出 && 輸入
	/*
	int number;
	cout << "Enter your number: ";
	cin >> number;
	cout << "Your number is: " << number << endl;

	int n1, n2;
	cin >> n1 >> n2;
	cout << "n1: " << n1 << " and n2: " << n2 << endl;

	int n1, n2;
	cout << "Enter n1: ";
	cin >> n1 ;
	cout << "Enter n2: ";
	cin >> n2;
	cout << "n1: " << n1 << " and n2: " << n2 << endl;
	*/

	// cout && setprecision
	/*
	int age = 30;
	cout << "You are " << age << " years old." << endl;
	double score = 37.256;
	cout << "Your score is: " << score << endl;
	cout << "Your score is: " << fixed << setprecision(2) << score << endl;
	cout << "Your score is: " << setprecision(2) << score << endl;
	*/

	// Data Types
	/*
	char grade = 'A';
	int n1 = 12;
	float n2 = 3.2;
	double n3 = 6.8;
	bool isGood = true;
	cout << "Size of Character: " << sizeof(grade) << endl;
	cout << "Size of integer: " << sizeof(n1) << endl;
	cout << "Size of float: " << sizeof(n2) << endl;
	cout << "Size of Double: " << sizeof(n3) << endl;
	cout << "Size of boolean: " << sizeof(isGood) << endl;
	*/

	// string
	/*
	string slogan = "Welcome To APCS0002!!";
	cout << "String length: " << slogan.length() << endl;
//	for(int i = 0; i < slogan.length(); ++i){
//		cout << slogan[i];
//	}
	for(unsigned int i = 0; i < slogan.length(); ++i){
		cout << slogan[i];
	}
	cout << endl;

	cout << slogan.substr(6, 10);
	*/

	// string cin getline
	/*
	string name;
//	cout << "Please Enter your name: ";
//	cin >> name;
//	cout << "Your name is: " << name << endl;

	cout << "Please Enter your name: ";
	getline(cin, name);
	cout << "Your name is: " << name << endl;
	*/

	// vector 練習
	/*
	vector<int> v1;
	int n;
	int temp;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> temp;
		v1.push_back(temp);
	}
	for(int i = 0; i < n; ++i){
		cout << v1[i] << " ";
	}
	*/

	// vector (方法)
	/*
	vector<int> v1 = {32, 68, 100, 98, 85, 67, 80, 95};
	for(int i = 0; i < 8; ++i){
		cout << v1[i] << " ";
	}
	cout << endl;
	cout << "vector front: " << v1.front() << endl;
	cout << "vector back: " << v1.back() << endl;
	cout << "vector size: " << v1.size() << endl; // 矩陣內元素量
	cout << "vector capacity: " << v1.capacity() << endl; // 矩陣容量
	v1.push_back(98);
	v1.push_back(97);
	cout << "vector size: " << v1.size() << endl; // 矩陣內元素量
	cout << "vector capacity: " << v1.capacity() << endl; // 矩陣容量
	v1.pop_back();
	v1.pop_back();
	cout << "vector size: " << v1.size() << endl; // 矩陣內元素量
	cout << "vector capacity: " << v1.capacity() << endl; // 矩陣容量
	*/

	// 搜尋法
	//int score[12] = {63, 57, 88, 95, 37, 100, 93, 68, 52, 80, 77, 82};

	int score[12] = {37, 52, 57, 63, 68, 77, 80, 82, 88, 93, 95, 100};
	int low = 0;
	int high = 11;
	int mid = (low+high)/2;
	int target = 52;
	int ans;

	while(true){
		if(target > score[mid]){
			low = mid + 1;
			mid = (low+high)/2;
		}else if(target < score[mid]){
			high = mid - 1;
			mid = (low+high)/2;
		}else if(target == score[mid]){
			ans = mid;
			break;
		}
	}
	cout << ans;

	return 0;

}









