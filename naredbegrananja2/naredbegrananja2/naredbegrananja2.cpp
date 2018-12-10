// naredbegrananja2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	/*
	int broj1;
	int broj2;
	char oper;

	cout << "unesite broj 1: ";
	cin >> broj1;
	cout << "unesite broj 2: ";
	cin >> broj2;
	cout << "unesite operator: ";
	cin >> oper; */
/*
	switch (int(oper)) {
		case int('+') :
			cout << broj1 + broj2;
			break;
		case int('-') :
			cout << broj1 - broj2;
			break;
		case int('*') :
			cout << broj1 * broj2;
			break;
		case int('/') :
			cout << setprecision(2) << fixed << broj1 / float(broj2);
			break;
		default:
			cout << "niste unijeli jedan od operatora +-* ili /.";
	} return 0;
*/
	/*
	int broj;
	int broj2;
	cout << "progrram 1, 2 ili 3?";
	cin >> broj;

	switch (broj) {
	case 1:
		cout << "unesite broj: ";
		cin >> broj2;
		cout << broj2;
		break;
	case 2:
		cout << "dobar dan";
		break;
	case 3:
		cout << "izlaz";
		break;
	}
	*/
	
	int broj;
	cout << "molimo broj stiha: ";
	cin >> broj;
	switch (broj) {
	case 1:
		cout << "bratec martin";
	case 2:
		cout << "bratec martin";
	case 3:
		cout << "bratec martin";
	case 4:
		cout << "bratec martin";
	}

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
