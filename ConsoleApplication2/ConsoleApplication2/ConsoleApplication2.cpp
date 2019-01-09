// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*
	float a;
	float b;

	cout << "unesite jedan broj: " << endl;
	cin >> a;

	cout << "unesite drugi broj: " << endl;
	cin >> b;

	cout << setprecision(0) << a + b << endl;
	cout << setprecision(0) << a - b << endl;
	cout << setprecision(0) << a * b << endl;
	cout << setprecision(2) << fixed << a / b << endl; 

	*/
	
	int broj;
	int tis;
	int sto;
	int des;
	int jed;

	cout << "upisite cetveroznamenkasti broj: " << endl;
	cin >> broj;
	tis = broj / 1000;
	sto = (broj % 1000) / 100;
	des = (broj % 100) / 10;
	jed = (broj % 10) / 1;

	cout << tis << endl;
	cout << sto << endl;
	cout << des << endl;
	cout << jed << endl;
	
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
