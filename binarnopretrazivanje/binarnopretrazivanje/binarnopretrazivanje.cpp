// binarnopretrazivanje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int randomBroj = rand() % 100 + 1;
	int pocetak = 0;
	int kraj = 100;
	int sredina = (kraj - pocetak) / 2;
	while (pocetak <= kraj && sredina != randomBroj) {
		if (sredina < randomBroj) {
			pocetak = sredina + 1;
		}
		else if (sredina > randomBroj) {

		}
	}
	cout << "Trazeni broj je: " << sredina << endl;
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
