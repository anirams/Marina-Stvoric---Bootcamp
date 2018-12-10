// petlje1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{	
	/*
	int suma = 0; 
	int broj;
	
	while ( cin >> broj && broj != 0) {
		
		suma += broj;
		cout << suma;
	}
	*/


	/*
	int lozinka = 1234;
	int tocnalozinka;

	for (int i = 0; i < 3; i++) {                                //odmah ulazi u petlju i daje prvi pokusaj
		cout << "Ovo je vaš " << i+1 << " pokusaj" << endl;      //ako je lozinka tocna break odmah prekida 
		cout << "unesite lozinku: ";                             //petlju da se ne bi nastavila ponavljati
		cin >> tocnalozinka;
		if (lozinka == tocnalozinka) {
			cout << "lozinka je tocna";
			break;
		}
		else {
			cout << "lozinka nije tocna, pokusajte ponovno" << endl;
		}
	}
	*/
	/*
	for (int i = 1; i < 100; i++) {
		if (i == 1) {
			cout << i << " bottle of beer on the wall," << endl;
		}
		else {
			cout << i << " bottles of beer on the wall," << endl;
		}
	}
	*/

	/*
	int x;
	cin >> x;
	
	for (int i = 1; i <= x; i++) {
		cout << pow (i,2) << endl;
	}
	*/

	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i*j << "\t";
		}
		cout << endl; //prije nego prebaci na j = 2, prebaci u novi red
	} 

/*
	for (int i = -1; i > 0; i++) {
		cout << i;
	}*/
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
