// rekurzivnefunkcije.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void od0do5(int a);
void od5do0(int a);

int main()
{
	cout << "Rekurzivna funkcija od 0 do 5: " << endl;

	od0do5(5);

	cout << "Rekurzivna funkcija od 5 do 0: " << endl;

	od5do0(5);

	return 0;
}

void od0do5(int a) {
	cout << "Broj: " << a << endl;
	
	if (a > 0) {
		od0do5(a-1);
	}
}

void od5do0(int a) {
	
	
	if (a > 0) {
		od5do0(a-1);
	}
	cout << "Broj: " << a << endl;

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
