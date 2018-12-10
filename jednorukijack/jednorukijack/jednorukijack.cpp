// jednorukijack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int vrti;
	int broj1, broj2, broj3;
	do {
		broj1 = rand() % 4 + 1;
		broj2 = rand() % 4 + 1;
		broj3 = rand() % 4 + 1;
		
		cout << "Molimo unesite 0 za spin: " << endl;
		cin >> vrti;
		cout << broj1 << "\t" << broj2 << "\t" << broj3 <<endl;
		
	} while (broj1 != broj2 || broj2 != broj3);
		if (broj1 == broj2 && broj2 == broj3) {
			cout << "BINGO!";
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
