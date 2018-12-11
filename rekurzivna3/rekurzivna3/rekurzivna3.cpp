// rekurzivna3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

void fibbonacci(int a, int b, vector<int>&vfibbonacci);

int main()
{
	int a = 0;
	int b = 1;
	vector <int> vfibbonacci;
	int element;
	vfibbonacci.push_back(a);
	vfibbonacci.push_back(b);
	fibbonacci(a, b, vfibbonacci);

	for (int i = 0; i < vfibbonacci.size(); i++) {
		cout << vfibbonacci[i] << endl;
	}

	cout << "vrijednost fibbonaccijevog broja za element br: " << endl;
	cin >> element;

	cout << "vrijednost zadanog elementa u fibbonaccijevom nizu je: " << vfibbonacci[element];

	return 0;
}

void fibbonacci(int a, int b, vector<int>&vfibbonacci) {
	if (vfibbonacci.size() < 50) {
		int temp = a;
		a = b;
		b = temp + a;
		vfibbonacci.push_back(b);
		fibbonacci(a, b, vfibbonacci);
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
