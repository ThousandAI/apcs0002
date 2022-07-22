//============================================================================
// Name        : class01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Data Type
	/*
	char grade = 'A+';
	string name = "Thousand AI";
	int age = 30;
	double score = 95.3;
	bool isMale = true;
	*/

	// string
	/*
	cout << "My name is Thousand.\nMy age is 30." << endl;
	string slogan = "Welcome To APCS0002!!";
	cout << slogan.length() << endl;
	for(int i = 0; i < slogan.length(); ++i){
		cout << slogan[i];
	}
	cout << endl;
	cout << slogan.substr(3,12);
	*/

	// input
	/*
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Your are " << age << " years old." << endl;
	*/

	// input + string
	string host;
	cout << "Enter your name: ";
	//cin >> host;
	getline(cin, host);
	cout << host << " Welcome to apcs0002" << endl ;
	return 0;
}












