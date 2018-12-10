// gjuro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int lem;
	cin >> lem;

	int lemostatak = lem % 5;

	switch (lemostatak) {
	case 0:
		cout << lem;
		break;
	case 1:
		cout << lem - 1;
		break;
	case 2:
		cout << lem - 2;
		break;
	case 3:
		cout << lem + 2;
		break;
	case 4:
		cout << lem + 1;
		break;
	case 5:
		cout << lem;
		break;
	case 6:
		cout << lem - 1;
		break;
	case 7:
		cout << lem - 2;
		break;
	case 8:
		cout << lem + 2;
		break;
	case 9:
		cout << lem + 1;
		break;
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
