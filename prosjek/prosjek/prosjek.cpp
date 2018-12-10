// prosjek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int ocjena;
	int zbroj =0;
	int brojocjena = 0;
	do {
		cin >> ocjena;
		zbroj += ocjena;
		brojocjena++;
		if (ocjena == 1) {
			cout << 1;
		}

	} while (ocjena != 0);

	cout << float(zbroj / brojocjena);
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
