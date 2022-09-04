//============================================================================
// Name        : class06.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <vector>

using namespace std;




int main(void){
	map<string, string> mapStudent;

	// 1. insert
	mapStudent.insert(make_pair("Frank", "F123456789"));
	// {"Frank": "A123456789", "Ryan": "A124556788"}

	// 2. assign
	mapStudent["Ryan"] = "F124556788";
	mapStudent["Alan"] = "F122155688";
	mapStudent["Thousand"] = "A124556355";
	mapStudent["Shen"] = "J128576385";
	mapStudent["TRZ"] = "A128530678";
	mapStudent["Daisy"] = "A228576385";

	// 3. Query

	cout << mapStudent["TRZ"] << endl;

	// 4. 查詢 key 是否在 mapStudent

	cout << mapStudent.count("Alan") << endl;
	cout << mapStudent.count("Allie") << endl;

	map<string, string>:: iterator iter;

	iter = mapStudent.find("AABBC");
	if(iter != mapStudent.end()){
		cout << "Yes";
	}else{
		cout << "No";
	}
	cout << "\n";

	for(iter=mapStudent.begin(); iter!=mapStudent.end(); ++iter){
		cout << iter->first << " " << (*iter).second << endl;
	}

	cout << mapStudent.size() << endl;

	mapStudent.erase("TRZ");
	mapStudent.erase("Shen");

	for(iter=mapStudent.begin(); iter!=mapStudent.end(); ++iter){
			cout << iter->first << " " << (*iter).second << endl;
		}
}
