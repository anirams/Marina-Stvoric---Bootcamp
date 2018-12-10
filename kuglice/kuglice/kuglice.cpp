// kuglice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	bool kutije[10] = {false, false, false, false, false, false, false, false, false, false};
	int kuglica1;
	int kuglica2;
	cin >> kuglica1 >> kuglica2;

	kutije[kuglica1 - 1] = true;
	kutije[kuglica2 - 1] = true;
	
	for (int i = 0; i < 5; i++) {
		cin >> kuglica1 >> kuglica2;
		bool temp;
		temp = kutije[kuglica1 - 1];
		kutije[kuglica1 - 1] = kutije[kuglica2 - 1];
		kutije[kuglica2 - 1] = temp;
	}

	for (int i = 0; i < 10; i++) {
		if (kutije[i] == true) {
			cout << i + 1 << " ";
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
