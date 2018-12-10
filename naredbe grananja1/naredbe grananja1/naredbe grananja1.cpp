// naredbe grananja1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	/*
	int age1;
	int age2;
	cout << "molime unesite godine1: ";
	cin >> age1;
	cout << "molimo unesite godine2: ";
	cin >> age2;

	if (age1 < age2) {
		cout << age2;
	}
	else {
		cout << age1;
	}
	*/

	/*
	int num;

	cout << "Molimo unesite broj: ";
	cin >> num;

	if (num % 2 == 0) {
		cout << "Broj je paran";
	}
	else {
		cout << "Broj je neparan";
	}
	*/

	/*
	string lozinka = "";
	string lozponovno = "";

	cout << "Molimo unesite lozinku: ";
	cin >> lozinka;

	cout << "Molimo ponovno unesite lozinku: ";
	cin >> lozponovno;
	if (lozinka == lozponovno) {
		cout << "Lozinka je tocna.";
	}
	else {
		cout << "Lozinka nije tocna.";
	}
	*/

	int broj1;
	int	broj2;
	char oper;

	cout << "unesite broj 1: ";
	cin >> broj1;

	cout << "unesite broj 2: ";
	cin >> broj2;

	cout << "unesite operator: ";
	cin >> oper;

	if (oper == '+') {
		cout << broj1 + broj2;

	}
	else if (oper == '-') {
		cout << broj1 - broj2;
	} 
	else if (oper == '*') {
		cout << broj1 * broj2;
	} 
	else if (oper == '/') {
		float broj11 = float(broj1);
		float broj22 = float(broj2);
		cout << setprecision(2) << fixed << broj11 / broj22;
	}
	else {
		cout << "niste unijeli jedan od ponudenih operatora.";
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
