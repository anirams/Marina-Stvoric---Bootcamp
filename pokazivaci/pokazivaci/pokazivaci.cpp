// pokazivaci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	
	int *p_a = &a;
	
	cout << "a = " << a << endl;
	cout << "p_a = " << p_a << endl;
	cout << "&a = " << &a << endl;
	cout << "*p_a = " << *p_a << endl;

	int *p_x = new int;  // int x;
	*p_x = 10;           // x = 10;
	cout << "Na adresi " << p_x << " upisana je vrijednost " << *p_x << endl;

	delete p_x;

	p_x = nullptr;

	int x;
	cout << "unesite velicinu polja: ";
	cin >> x;

	int *polje = new int[x];

	for (int i = 0; i < x; i++) {
		cout << "Polje " << i << ": ";
		cin >> polje[i];
	}

	for (int i = 0; i < x; i++) {
		cout << polje[i] << "\t";
	}

	//delete polje;
	//polje = nullptr;

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
