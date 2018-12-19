// lijecnickaordinacija2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Pacjent {
	string mbo;
	string ime;
	string prezime;
	string lijekovi;
};

void unosPacjenta();
void ispisPacjenata();

int main()
{
	int izbor;
	do {
		system("cls");
		cout << "Molimo unesite broj:" << endl << "1 unos novih pacjenata" << endl << "2 ispis svih pacjenata" << endl
			<< "3 pretraga pacjenata po MBO" << endl << "4 cekaonica" << endl << "5 dodavanje recepata" << endl;
		cin >> izbor;
		cin.ignore();
		switch (izbor)
		{
		case 1:
			unosPacjenta();
			break;
		case 2:
			ispisPacjenata();
			break;
		case 0:
			break;
		}

	} while (izbor != 0);
	system("pause");
	return 0;
}

void unosPacjenta() {
	string mbo = "";
	string ime = "";
	string prezime = "";
	cout << "MBO: " << endl;
	cin >> mbo;

	ifstream input("pacjenti.txt");
	string line = "";
	vector <string> popisMbo;

	for (int lineno = 0; getline(input, line); lineno+=3) {
		
		getline(input, line);
		popisMbo.push_back(line);
		cout << popisMbo[lineno];
	}
	
	input.close();

	for (int i = 0; i < popisMbo.size(); i++) {
		if (mbo == popisMbo[i]) {
			cout << "Korisnik sa navedenim MBO vec postoji!" << endl;
		}
		else {
			cout << "Ime: " << endl;
			cin >> ime;
			cout << "Prezime: " << endl;
			cin >> prezime;
			
			string za_spremanje = mbo + "\n" + ime + "\n" + prezime + "\n";

			ofstream output;
			output.open("pacjenti.txt", ios::out | ios::app);
			output << za_spremanje;
			output.close();
		}
	}
	
	system("pause");

}

void ispisPacjenata() {
	int i = 0;
	vector <Pacjent> pacjenti;

	ifstream input("pacjenti.txt");

	while (!input.eof()) {
		getline(input, pacjenti[i].mbo);
		getline(input, pacjenti[i].ime);
		getline(input, pacjenti[i].prezime);
		i++;
	}

	for (int j = 0; j < pacjenti.size(); j++) {
		cout << pacjenti[j].mbo << " " << pacjenti[j].ime << " " << pacjenti[j].prezime << endl;
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
