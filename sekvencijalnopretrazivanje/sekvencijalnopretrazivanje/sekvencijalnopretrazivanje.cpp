// sekvencijalnopretrazivanje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int prviPut(const int velicinaPolja, string polje[], string trazenoIme);
int sviIndexi(vector <int> &mjesta, const int velicinaPolja, string polje[], string trazenoIme);

int main()
{
	const int velicinaPolja = 100;
	string polje[velicinaPolja];
	string line="";
	int j = 0;
	string trazenoIme = "";
	vector <int> mjesta;
	int x;
	int y;

	ifstream input;
	input.open("sekvencijalno.txt");
	while (getline(input, line)) {
		polje[j] = line;
		j++;
	}

	cout << "Unesite ime koje trazite: " << endl;
	cin >> trazenoIme;

	x = prviPut(velicinaPolja, polje, trazenoIme);
	
	if (x == -1) {
		cout << "Trazeno ime nije pronadjeno!" << endl;
	}
	else {
		cout << "Trazeno ime nalazi se na mjestu: " << x << endl;	
		sviIndexi(mjesta, velicinaPolja, polje, trazenoIme);
	}
	
	cout << "Trazeno ime nalazi se na slijedecim mjestima: " << endl;
	for (int i = 0; i < mjesta.size(); i++) {
		cout << mjesta[i] << endl;
	}

	return 0;
}

int prviPut(const int velicinaPolja, string polje[], string trazenoIme) {
	for (int i = 0; i < velicinaPolja; i++) {
		if (polje[i] == trazenoIme) {
			return i;
		} 
	}
	
	return -1;
}

int sviIndexi(vector <int> &mjesta, const int velicinaPolja, string polje[], string trazenoIme) {
	
	for (int i = 0; i < velicinaPolja; i++) {
		if (polje[i] == trazenoIme) {
			mjesta.push_back(i);
		}
	}
	return 0;
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
