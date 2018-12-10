// studenti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void prikazSvihStudenata();
void unosStudenta();
void pretrazivanjePoRbr();
//int prosjecnaOcjena();

int main()
{
	int izbornik;

	cout << "Molimo unesite \n 1. za prikaz svih studenata \n 2. za unos novog studenta \n";
	cout << " 3. za rbr studenta kojeg pretrazujete \n 4. za prosjeènu osjenu cijele grupe";
	cin >> izbornik;

	switch (izbornik) {
	case 1:
		prikazSvihStudenata();
		break;
	case 2: 
		unosStudenta();
		break;
	case 3:
		pretrazivanjePoRbr();
		break;
	//case 4:
		//prosjecnaOcjena();
		//break;
	default: 
		cout << "Unijeli ste nevazeci broj!";
	}

	return 0;
}

void prikazSvihStudenata() {

	string line;
	vector<string> studenti;

	ifstream input("studenti.txt");

	while (input) {
		getline(input, line);
		studenti.push_back(line);
	}

	input.close();

	for (int i = 0; i < studenti.size()-1; i++) {
		cout << studenti[i];
	}

}

void unosStudenta() {

	int id;
	string ime;
	string prezime;
	int prosjek;
	int ects;
	string line;
	
	cout << "Unesite redni broj studenta: ";
	cin >> id;
	cout << "Molimo unesite ime: ";
	cin >> ime;
	cout << "Molimo unesite prezime: ";
	cin >> prezime;
	cout << "Molimo unesite prosjek: ";
	cin >> prosjek;
	cout << "Unesite br ects bodova: ";
	cin >> ects;

	line = to_string(id) + " " + ime + " " + prezime + " " + to_string(prosjek) + " " + to_string(ects);
	
	ofstream output;
	output.open("studenti.txt", ios::out | ios::app);
	output << line;
	output.close();

}

void pretrazivanjePoRbr() {

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
