// strukture.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <random>

using namespace std;

struct Koordinate {
	int x;
	int y;
};

int nasumicno();

int main()
{	
	int odabir;
	do {
		cout << "molimo unesite 1 za nasumicno ili 0 za izlaz: ";
		cin >> odabir;
		nasumicno();
	} while (odabir != 0);
	
	return 0;
}

int nasumicno() {

	srand(time(NULL));

	char x = 'x';
	char o = 'o';
	char polje[10][10];
	Koordinate koordinate;

	koordinate.x = rand() % 10 + 1;
	koordinate.y = rand() % 10 + 1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
				polje[i][j] = o;	
		}	
	}
	polje[koordinate.x-1][koordinate.y-1] = x;

	system("cls");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << polje[i][j] << "\t";
		}
		cout << endl;
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
