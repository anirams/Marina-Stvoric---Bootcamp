// bubblesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;


void bubblesort(vector <int> &lista, int velicina);
int main()
{
	srand(time(NULL));
	int velicina;
	int nasumicni;
	vector <int>lista;
	cout << "Unesite broj elemenata liste: ";
	cin >> velicina;
	
	for (int i = 0; i < velicina; i++) {
		nasumicni = rand() % 100 + 1;
		lista.push_back(nasumicni);
	}

	bubblesort(lista, velicina);

	for (int i = 0; i < lista.size(); i++) {
		cout << lista[i] << endl;
	}
	return 0;
}

void bubblesort(vector <int> &lista, int velicina) {
	int temp;
	bool bilaZamjena = true;

	for (int i = 0; bilaZamjena == true; i++) { // broj krugova koje mora proc, da je i<velicina, vrtila bi petlju i ako je sortirana 
		bilaZamjena = false;
		for (int j = 0; j < velicina - 1 - i; j++) {
			if (lista[j] > lista[j + 1]) {
				temp = lista[j];
				lista[j] = lista[j + 1];
				lista[j + 1] = temp;
				bilaZamjena = true;
			}
		}
	}
	// da sam ovdje stavila cout moglo bi bez reference ali bi izbacivalo samo kopiju vektora iz main funkcije

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
