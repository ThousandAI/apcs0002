//============================================================================
// Name        : class06.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>

using namespace std;

int main(void){
//	map<string, string> mapStudent;
//	mapStudent.insert(pair<string, string>("r100", "student_zero"));
//
//	mapStudent["r123"] = "student_first";
//	mapStudent["r456"] = "student_second";
//	cout << mapStudent["r123"] << endl;
//	cout << mapStudent.count("r123");

	map<char, int> mp;
	mp['T'] = 7;
	mp['S'] = 8;
	mp['A'] = 4;

	map<char, int>:: iterator iter;

	iter = mp.find('T');
	if(iter != mp.end()){
		cout << "Yes";
	}

	for(iter=mp.begin(); iter!=mp.end(); ++iter){
		cout << (*iter).second << endl;
	}

//  for(auto iter=mp.begin(); iter!=mp.end(); ++iter){
//	cout << (*iter).second << endl;
//}
}
