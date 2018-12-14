// klobuk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int harry;
	int hermiona;
	vector <int>brojeviHarry;
	vector <int> brojeviHermiona;
	int brojHarry = 0;
	int brojHermiona = 0;

	cin >> harry;
	cin.ignore();
	cin >> hermiona;
	cin.ignore();
	
	for (int i = 0; i < harry; i++) {
		int line;
		cin >> line;
		brojeviHarry.push_back(line);
	}

	for (int i = 0; i < hermiona; i++) {
		int line;
		cin >> line;
		brojeviHermiona.push_back(line);
	}

	for (int i = 0; i < harry; i++) {
		brojHarry += brojeviHarry[i] * 1 * pow(10, brojeviHarry.size() - 1 - i);
		
	}
	cout << "HARRY:" << brojHarry << endl;

	for (int i = 0; i < hermiona; i++) {
		brojHermiona += brojeviHermiona[i] * 1 * pow(10, brojeviHermiona.size() - 1 - i);

	}
	cout << "HERMIONA:" << brojHermiona << endl;

	if (brojHarry < brojHermiona) {
		cout << "HERMIONA " << brojHermiona - brojHarry << endl;
	}
	else if (brojHarry > brojHermiona) {
		cout << "HARRY " << brojHarry - brojHermiona << endl;
	}
	else {
		cout << "JEDNAKO " << brojHarry - brojHermiona << endl;
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
