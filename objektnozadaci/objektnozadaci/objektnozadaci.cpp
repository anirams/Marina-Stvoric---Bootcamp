// objektnozadaci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "zivotinje.h"

using namespace std;

class Covjek {
public:
	string ime="";
	int god;
	void pozdrav();
	void godine();
	void hodanje();
private:
	void nesto();
};

void Covjek::pozdrav() {
	cout << "Dobar dan, ja sam " << ime << endl;
}

void Covjek::godine() {
	cout << "Imam " << god << " godina." << endl;
}

void Covjek::hodanje() {
	if (god > 50) {
		cout << "Necu, ja sam star!" << endl;
	}
	else {
		cout << "Evo hodam" << endl;
	}
}

void Covjek::nesto() {
	cout << "Nesto" << endl;
}

int main()
{
	Covjek c1;
	c1.ime = "Robert";
	c1.pozdrav();
	c1.god = 65;
	c1.godine();
	c1.hodanje();
	
	Covjek c2;
	c2.ime = "Jan";
	c2.pozdrav();
	c2.god = 30;
	c2.godine();
	c2.hodanje();

	Covjek c3;
	c3.ime = "Ana";
	c3.pozdrav();
	c3.god = 45;
	c3.godine();
	c3.hodanje();

	Zivotinja z1;
	z1.ime = "Majmun";
	z1.god = 12;
	z1.glasanje();
	z1.trcanje();

	Zivotinja z2;
	z2.ime = "Kornjaca";
	z2.god = 12;
	z2.glasanje();
	z2.trcanje();

	Zivotinja z3;
	z3.ime = "Tigar";
	z3.god = 12;
	z3.glasanje();
	z3.trcanje();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
