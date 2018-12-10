// fileio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int broj;
	int temp;
	string zainput;
	vector<string> podaci;
	cout << "molimo unesite neki broj: ";
	cin >> broj;

	int i = 0;
	
	ofstream output;
	output.open("primjer.txt", ios::out);

	while (i < broj) {
		
		temp = i;
		zainput = to_string(temp);
		output <<"\n" <<zainput;
		
		i++;
	}
	output.close();
	

	string brojevi;
	ifstream input("primjer.txt");
	while (input) {
		getline(input, brojevi);
		podaci.push_back(brojevi);
	}
	input.close();
	cout << podaci.size();
	for (int i = 0; i < podaci.size()-1; i++) {
		cout << podaci[i];
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
