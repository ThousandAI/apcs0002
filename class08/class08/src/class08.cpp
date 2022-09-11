//============================================================================
// Name        : class08.cpp
// Author      : Thousand AI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


// Struct
/*
struct Warrior{
	string name;
	string gender;
	int lv;
	int exp;
	int attack;
	int defense;
};


int main() {
	Warrior w1;
	w1.name = "Thousand";
	w1.gender = "Male";
	w1.lv = 1;
	w1.exp = 0;
	w1.attack = 50;
	w1.defense = 30;
	cout << "Name: " << w1.name << " Gender: " << w1.gender << " Lv: " << w1.lv << " Exp: " << w1.exp << " Attack: " << w1.attack << " Defense: " << w1.defense;

	Warrior* w2 = new Warrior;
	w2->name = "Allie";
	(*w2).gender = "Female";
	w2 -> lv = 1;
	w2 -> exp = 0;
	w2 -> attack = 50;
	w2 -> defense = 30;
	cout << "\n";
	cout << "Name: " << w2->name << " Gender: " << w2->gender << " Lv: " << w2->lv << " Exp: " << w2->exp << " Attack: " << w2->attack << " Defense: " << w2->defense;
	return 0;
}
*/

class Warrior{
private:
	string Name;
	string Gender;
	int Lv;
	int Exp;
	int Attack;
	int Defense;
	int Points;
public:
	// Constructor
	Warrior(string name, string gender){
		Name = name;
		Gender = gender;
		Lv = 1;
		Exp = 0;
		Attack = 50;
		Defense = 30;
		Points = 0;
	}

	void introduce(){
		cout << "Name: " << Name << " Gender: " << Gender << " Lv: " << Lv << " Exp: " << Exp << " Attack: " << Attack << " Defense: " << Defense;
	}

	void getLv(){
		cout << "Your level is: " << Lv;
	}

	void setLv(int lv){
		Lv = lv;
	}

	void buyPoints(){
		Points = 100;
		cout << "Ok";
	}

	void setName(string name){
		if(Points >= 100){
			Name = name;
		}else{
			cout << "You need to buy Points";
		}
	}
};

int main(){
	/*
	Warrior w1;
	w1.name = "Thousand";
	w1.gender = "Male";
	w1.lv = 1;
	w1.exp = 0;
	w1.attack = 50;
	w1.defense = 30;
	w1.introduce();
	cout << "\n";
	Warrior* w2 = new Warrior;
	w2->name = "Allie";
	(*w2).gender = "Female";
	w2 -> lv = 1;
	w2 -> exp = 0;
	w2 -> attack = 50;
	w2 -> defense = 30;
	w2 -> introduce();
	*/

	Warrior w3("TRZ", "Male");
	w3.introduce();
	cout << "\n";
	Warrior* w4 = new Warrior("Alan", "Male");
	w4 -> introduce();
	cout << '\n';
	w3.introduce();
	cout << "\n";
	w3.getLv();
	w3.setLv(10);
	cout << "\n";
	w3.introduce();
	cout << "\n";
	w3.setName("Thousand");
	cout << "\n";
	w3.buyPoints();
	cout << "\n";
	w3.setName("Thousand");
	w3.introduce();
	return 0;
}
