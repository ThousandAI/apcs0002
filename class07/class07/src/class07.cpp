//============================================================================
// Name        : class07.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// struct
/*
struct Person{
	string name;
	string education;
	int age;
	int likes;
};

int main(void){

	Person person1;
	person1.name = "Thousand";
	person1.education = "Ph.D";
	person1.age = 30;
	person1.likes = 0;
	cout << person1.name << " " << person1.education << " " << person1.age << " " << person1.likes << "\n";

	Person* person2 = new Person;
	(*person2).name = "Allie";
	(*person2).education = "Bachelor";

	cout << (*person2).name << "\n";

	person2 -> age = 26;
	person2 -> likes = 0;

	cout << person2-> age << "\n";
}

*/


class Person{
public: // Access modifiers
	string name;
	string education;
	int age;
	int likes;

	// method
	void introduce(){
		cout << "Name is: " << name << ", " << "Education is: " << education << ", " << "Age is: " << age << ", " << "Likes: " << likes << " "<< "\n";
	}

	// 建構子 (constructor)
	Person(string n, string e, int a, int l){
		name = n;
		education = e;
		age = a;
		likes = l;
	}
};

int main() {

//	Person person1;
//	person1.name = "Thousand";
//	person1.education = "Ph.D";
//	person1.age = 30;
//	person1.likes = 0;
//	person1.introduce();
//
//	Person person2;
//	person2.name = "Allie";
//	person2.education = "Bachelor";
//	person2.age = 26;
//	person2.likes = 0;
//	person2.introduce();

	Person person3("TRZ", "Senior High School", 16, 0);
	person3.introduce();

	return 0;
}



// Encapsulation
/*
class Person{
private:
	string name;
	string education;
	int age;
	int likes;
public:
	Person(string n, string e, int a, int l){
		name = n;
		education = e;
		age = a;
		likes = l;
	}
	void introduce(){
		cout << "Name is: " << name << ", " << "Education is: " << education << ", " << "Age is: " << age << ", " << "Likes: " << likes << " "<< "\n";
	}
	void setLikes(bool like){
		if(like == true)
			likes++;
		else
			likes--;
	}
};

int main(void){
	Person person1("Thousand", "Ph.D", 30, 0);
	person1.introduce();
	person1.setLikes(true);
	person1.setLikes(true);
	person1.setLikes(true);
	person1.setLikes(false);
	person1.introduce();
	//person1.name = "Thousand";
}

*/
