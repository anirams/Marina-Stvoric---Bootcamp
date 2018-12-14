// opetstudenti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void unosStudenta();
void ispisStudenata();
void sortiranje();
void sortiranjePoImenu();

struct Student {
	string ime;
	string prezime;
	string prosjek;
};

int main()
{
	int izbor;
	
	do {
		system("cls");
		cout << "Unesite: " << endl << "1 za unos studenta" << endl << "2 za ispis studenata" << endl
			<< "3 za sortiranje studenata" << endl << "0 za izlaz" << endl;
		cin >> izbor;

		switch (izbor)
		{
		case 1:
			unosStudenta();
			break;
		case 2:
			ispisStudenata();
			break;
		case 3:
			sortiranje();
			break;
		case 0:
			break;
		}
	} while (izbor != 0);


	return 0;
}

void unosStudenta() {
	string ime, prezime, prosjek;
	string za_spremanje="";

	cout << "Ime: " << endl;
	cin >> ime;
	cin.ignore();
	cout << "Prezime: " << endl;
	cin >> prezime;
	cin.ignore();
	cout << "Prosjek: " << endl;
	cin >> prosjek;
	cin.ignore();

	za_spremanje = ime + " " + prezime + " " + prosjek + "\n";

	ofstream output;
	output.open("studenti.txt", ios::out | ios::app);
	output << za_spremanje;
	output.close();

}

void ispisStudenata() {
	string line;
	vector <string> studenti;
	ifstream input("studenti.txt");
	while (getline(input, line)) {
		studenti.push_back(line);
	}
	input.close();
	
	for (int i = 0; i < studenti.size(); i++) {
		cout << studenti[i] << endl;
	}
	system("pause");
}

void sortiranje() {
	int izbor;

	do {
		cout << "Unesite za sortiranje prema: " << endl << "1 imenu" << endl << "2 prezimenu" << endl << "3 prosjeku" << endl
		<< "0 za povratak u prethodni izbornik" << endl;
		cin >> izbor;
		switch (izbor)
		{
		case 1:
			sortiranjePoImenu();
			break;
		case 0:
			break;
		}
	} while (izbor != 0);
}

void sortiranjePoImenu() {
	vector<Student> studenti;
	ifstream input("studenti.txt");
	int i = 0;
	while (!input.eof()) {
		studenti
	}
		
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
