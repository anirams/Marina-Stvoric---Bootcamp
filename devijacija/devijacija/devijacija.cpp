// devijacija.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a, b, c, d, e;
	float aritm, dev;
	cin >> a >> b >> c >> d >> e;
	 aritm = (a + b + c + d + e) / 5;
	 dev = sqrt((pow(a - aritm, 2) + pow(b - aritm, 2) + pow(c - aritm, 2) + pow(d - aritm, 2) + pow(e - aritm, 2)) / 5);
	cout << setprecision(2) << fixed << aritm << endl;
	cout << setprecision(2) << fixed << dev;
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
