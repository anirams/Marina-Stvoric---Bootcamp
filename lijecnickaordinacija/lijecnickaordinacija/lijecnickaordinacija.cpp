// lijecnickaordinacija.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <fstream>
#include <sstream>

using namespace std;

struct Pacjent {
	string mbo;
	string ime;
	string prezime;
	vector <string> lijekovi;
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
	string za_spremanje="";
	string mbo = "";
	string ime = "";
	string prezime = "";
	int brojLijekova;
	vector<string> lijekovi;


	cout << "MBO: " << endl;
	getline(cin, mbo);
	cout << "Ime: " << endl;
	getline(cin, ime);
	cout << "Prezime: " << endl;
	getline(cin, prezime);
	cout << "Broj lijekova: " << endl;
	cin >> brojLijekova;
	cin.ignore();
	for (int i = 0; i < brojLijekova; i++) {
		cout << "Unesite lijek: " << endl;
		string lijek = "";
		getline(cin, lijek);
		lijekovi.push_back(lijek);
	}



	za_spremanje = mbo + "\n" + ime + "\n" + prezime + "\n" + to_string(brojLijekova) + "\n" + lijek;

	cout << za_spremanje;
	ofstream output;
	output.open("pacjenti.txt", ios::out | ios::app);
	output << za_spremanje;
	output.close();

	/*Pacjent pacjentt;
	int brojLijekova;
	vector <string> lijekovi;
	string lijekovii = "";
	string za_output = "";

	system("cls");

	cout << "Unesite MBO: " << endl;
	getline(cin, pacjentt.mbo);
	
	ifstream input;
	input.open("pacjenti.txt");
	while (!input.eof()) {
		int mboIzFilea;
		string imeIzFilea;
		string prezimeIzFilea;
		input.ignore();
		getline(input, mboIzFilea);
		i++;
	}
	input.close();

	cout << "Ime: " << endl;
	getline(cin, pacjentt.ime);
	
	cout << "Prezime:" << endl;
	getline(cin, pacjentt.prezime);
	
	cout << "Koliko lijekova zelite unijeti:" << endl;
	cin >> brojLijekova;
	cin.ignore();

	for (int x = 0; x < brojLijekova; x++) {
		string lijek;
		cout << "Unesite ime lijeka: " << endl;
		getline(cin, lijek);
		pacjentt.lijekovi.push_back(lijek);

	}

	for (int i = 0; i < 5; i++) {
		lijekovii += pacjentt.lijekovi[i] + "\n"; 
	}
	
	za_output = pacjentt.mbo + "\n" + pacjentt.ime + "\n" + pacjentt.prezime + "\n" + brojLijekova + "\n" + lijekovii;

	ofstream output;
	output.open("pacjenti.txt", ios::out | ios::app);
	output << za_output;
	output.close();

	system("pause");
	*/
}

void ispisPacjenata() {
	Pacjent pacjentn;
	string brojLijekova="";
	string lijek = "";
	string lijekovi = "";
	ifstream input("pacjenti.txt");
	while (!input.eof()) {
		getline(input, pacjentn.mbo);
		getline(input, pacjentn.ime);
		getline(input, pacjentn.prezime);
		getline(input, brojLijekova);
		for (int i = 0; i < atoi(brojLijekova.c_str()); i++) {
			getline(input, lijek);
			pacjentn.lijekovi.push_back(lijek);
			lijekovi += pacjentn.lijekovi[i] + "\n";
		}
	}

	cout << pacjentn.mbo << endl << pacjentn.ime << endl << pacjentn.prezime << endl << lijekovi << endl;
	system("pause");
	/*
	int i = 0; 
	
	vector <Pacjent> pacjenti;
	ifstream input("pacjenti.txt");
	
	while (!input.eof()) {
		Pacjent pacjentt;
		string lijekoviIzFilea = "";
		string lije = "";
		int brojLijekova;
		getline(input, pacjentt.mbo);
		getline(input, pacjentt.ime);
		getline(input, pacjentt.prezime);
		getline(input, brojLijekova);
		for (int j = 0; j < brojLijekova; j++) {
			string linija = "";
			getline(input, linija);

		}

		cout <<
		pacjenti.push_back(pacjentt);
		i++;
	} 
	input.close();
	
	for (int j = 0; j < pacjenti.size(); j++) {
		cout << pacjenti[i].mbo;
	}

	system("pause");
	*/
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
