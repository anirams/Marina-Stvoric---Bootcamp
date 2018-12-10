// strukture2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct Studenti {
	int id;
	string ime;
	string prezime;
	char spol;
	float kolokvij1;
	float kolokvij2;
	float zavrsni;
	float ukupni;
};

void unosNovih();

vector<Studenti> student;
int lokator = 0; 

int main()
{
	
	int odabir;
	
	do {
		cout << "1. UNOS NOVIH" << endl << "2. BRISANJE PO ID-U" << endl << "3. IZMJENA PODATAKA STUDENTA" << endl;
		cout << "4. PRIKAZ SVIH STUDENATA" << endl << "5. PROSJEK PO ISPITU" << endl << "6. PRIKAZ NAJBOLJEG" << endl;
		cout << "7. PRIKAZ NAJGOREG" << endl << "8. prikaz po id-u" << endl << "9. sortiranje po ukupnom uspjehu" << endl;
		cout << "0. za izlaz";
		cin >> odabir;
	

		switch (odabir)
		{
		case 1:
		unosNovih();
		break;
		}

	} while (odabir != 0);

	return 0;
}

void unosNovih() {
	ofstream output;
	output.open("studenti.txt", ios::out | ios::app);
	cout << "Unesite id: ";
	output >> student[lokator].id;
	cout << "Unesite ime: ";
	output >> student[lokator].ime;
	cout << "Unesite prezime: ";
	cin >> student[lokator].prezime;
	cout << "Unesite spol: ";
	cin >> student[lokator].spol;
	cout << "Unesite kolokvij1: ";
	cin >> student[lokator].kolokvij1;
	cout << "Unesite kolokvij2: ";
	cin >> student[lokator].kolokvij2;
	cout << "Unesite zavrsni: ";
	cin >> student[lokator].zavrsni;
	cout << "Unesite ukupni: ";
	cin >> student[lokator].ukupni;

	output.close();

	lokator++;

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
