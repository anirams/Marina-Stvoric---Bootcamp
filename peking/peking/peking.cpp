// peking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int peking;

	if (peking <= 50) {
		cout << "dobra kvaliteta zraka";
	}
	else if (50 < peking <= 100) {
		cout << "umjerena kvaliteta zraka";
	}
	else if (100 < peking <= 150) {
		cout << "zrak nezdrav za osjetljive grupe";
	}
	else if (150 < peking <= 200) {
		cout << "nezdrav zrak";
	}
	else if (200 < peking <= 300) {
		cout << "vrlo nezdrav zrak";
	}
	else if (300 < peking <= 500) {
		cout << "opasan zrak";
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
