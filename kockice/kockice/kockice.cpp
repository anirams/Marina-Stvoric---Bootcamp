// kockice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int mirko, slavko;
	cin >> mirko;
	cin >> slavko;

	switch (mirko) {
	case 1:
		mirko = 6;
		break;
	case 2:
		mirko = 5;
		break;
	case 3:
		mirko = 4;

	}

	switch (slavko) {
	case 1:
		slavko = 6;
		break;
	case 2:
		slavko = 5;
		break;
	case 3:
		slavko = 4;

	}

	if (mirko > slavko) {
		cout << "mirko";
	}
	else if (slavko > mirko) {
		cout << "slavko";
	}
	else {
		cout << "nerijeseno";
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
