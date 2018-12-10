// varijable1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

const float PI = 3.14;

int main()
{
	int a = 5;
	char z = 'z';
	bool istina = true;
	float x = 1.23;
	double d = 5.55555;

	/*
		cout << a << z << istina << x << endl;
		
		cout << "unesite cijeli broj: " << endl;
		cin >> a;
		cout << a;

		cout << "unesite character: " << endl;
		cin >> z;
		cout << z;

		cout << "unesite 0 ili 1" << endl;
		cin >> istina;
		cout << istina;

		cout << "unesite decimalni broj: " << endl;
		cin >> x;
		cout << x;

		cout << "unesite decimalni broj sa 7 znamenki: " << endl;
		cin >> d;
		cout << d;
		*/

		int broj1;
		int broj2;
		int temp;

		cout << "unesite 1. broj: " << endl;
		cin >> broj1;
		
		cout << "unesite 2. broj: " << endl;
		cin >> broj2;

		temp = broj1;
		broj1 = broj2;
		broj2 = temp;

		cout << broj1 << endl;
		cout << broj2 << endl;

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
