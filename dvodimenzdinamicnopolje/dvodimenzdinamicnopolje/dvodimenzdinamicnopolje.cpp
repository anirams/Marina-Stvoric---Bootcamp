// dvodimenzdinamicnopolje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int velicina;
	int element;
	cout << "unesite velicinu polja: ";
	cin >> velicina;
	int ***p_p_p_polje = new int**[velicina];
	for (int i = 0; i < velicina; i++) {
		p_p_p_polje[i] = new int*[velicina];
		for (int j = 0; j < velicina; j++) {
			p_p_p_polje[i][j] = new int[velicina];
			for (int z = 0; z < velicina; z++) {
				p_p_p_polje[i][j][z] = i + j + z;
			}
			
			
		}
	}
	for (int i = 0; i < velicina; i++) {
		
		for (int j = 0; j < velicina; j++) {
		
			for (int z = 0; z < velicina; z++) {
				cout << p_p_p_polje[i][j][z] << endl;
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
