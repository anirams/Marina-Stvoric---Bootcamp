// igra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int broj;
	
	int tostatak, sostatak, dostatak, jostatak;

	cin >> broj;

	tostatak = broj / 1000;
	sostatak = (broj % 1000) / 100;
	dostatak = (broj % 100) / 10;
	jostatak = (broj % 10) / 1;

	
	if (tostatak < 9) {
		tostatak++;
		cout << tostatak * 1000 + sostatak * 100 + dostatak * 10 + jostatak * 1;
	}
	else if (tostatak == 9 && sostatak < 9) { // ako ne stavim da je sostatak < 9 onda ga poveca ako je npr 9966.
		sostatak++;
		cout << tostatak * 1000 + sostatak * 100 + dostatak * 10 + jostatak * 1;
	}
	else if (tostatak == 9 && sostatak == 9 && dostatak < 9) {
		tostatak = 9;
		sostatak = 9;
		dostatak++;
		cout << tostatak * 1000 + sostatak * 100 + dostatak * 10 + jostatak * 1;
	}
	else if (tostatak == 9 && sostatak == 9 && dostatak == 9 && jostatak < 9) {
		jostatak++;
		cout << tostatak * 1000 + sostatak * 100 + dostatak * 10 + jostatak * 1;
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
