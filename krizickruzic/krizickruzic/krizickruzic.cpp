// krizickruzic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char polje[9] = { '1','2','3','4','5','6','7','8', '9' };

	// crtanje polja:

	for (int i = 1; i <= 9; i++) { //krecemo od 1 tako da nam 3. bude djeljiv s 3
		if (i % 3 != 0) {
			cout << polje[i - 1] << "\t"; //moramo oduzet 1 tako da dobijemo index prvog polja
		}
		else
		{
			cout << polje[i - 1] << endl;
		}
	}

	// ovdje pocinje igra
	
	
		


		for (int i = 0; i < 9; i++) { //i = potezi, ogranicavamo broj poteza na 9

			int x = 0;                 // tek u petlji s potezima pocinje dodjeljivanje pozicija, ne treba deklarirat izvan
			cout << "Unesite poziciju: ";
			cin >> x;

			
			if (i % 2 == 0) { //ako je ostatak dijeljenja poteza 0 radi se o parnom broj, to je igrac x
				if ((polje[x - 1]) != 'x' && (polje[x - 1]) != 'o') { // ako je polje vec zauzeto ne upisuje nego vraca za i za 1
					polje[x - 1] = 'x'; // vracamo za 1 jer korisnik vidi br 1 umjesto 0;
				}
				else {
					i--;
					
				}
			}
			else {
				if ((polje[x - 1]) != 'x' && (polje[x - 1]) != 'o') {
					polje[x - 1] = 'o';
				}
				else {
					i--;	
				}
			}
			system("cls"); //brise prethodna polja

			for (int i = 1; i <= 9; i++) { //crta novo polje
				if (i % 3 != 0) {
					cout << polje[i - 1] << "\t";
				}
				else
				{
					cout << polje[i - 1] << endl;
				}
			}




			if (i > 3) { //ako imamo vise od 4 poteza, kod 5. vec moze postojat pobjednik

				if (polje[0] == polje[1] && polje[1] == polje[2]) {
					if (polje[0] == 'x') {
						cout << "pobjednik je x";
						i = 9;
					}
					else {
						cout << "pobjednik je o";
					}
				}

				if (polje[3] == polje[4] && polje[4] == polje[5]) {
					if (polje[3] == 'x') {
						cout << "pobjednik je x";
						i = 9;
					}
					else {
						cout << "pobjednik je o";
					}
				}

				if (polje[6] == polje[7] && polje[7] == polje[8]) {
					if (polje[6] == 'x') {
						cout << "pobjednik je x";
						i = 9;
					}
					else {
						cout << "pobjednik je o";
					}
				}

				if (polje[0] == polje[3] && polje[3] == polje[6]) {
					if (polje[0] == 'x') {
						cout << "pobjednik je x";
						i = 9;
					}
					else {
						cout << "pobjednik je o";
					}
				}

				if (polje[1] == polje[4] && polje[4] == polje[7]) {
					if (polje[1] == 'x') {
						cout << "pobjednik je x";
						i = 9;
					}
					else {
						cout << "pobjednik je o";
					}
				}

				if (polje[2] == polje[5] && polje[5] == polje[8]) {
					if (polje[2] == 'x') {
						cout << "pobjednik je x";
						i = 9;
					}
					else {
						cout << "pobjednik je o";
					}
				}

				if (polje[2] == polje[4] && polje[4] == polje[6]) {
					if (polje[2] == 'x') {
						cout << "pobjednik je x";
						i = 9;
					}
					else {
						cout << "pobjednik je o";
					}
				}

				if (polje[0] == polje[4] && polje[4] == polje[8]) {
					if (polje[2] == 'x') {
						cout << "pobjednik je x";
						i = 9;
					}
					else {
						cout << "pobjednik je o";
					}
				}

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
