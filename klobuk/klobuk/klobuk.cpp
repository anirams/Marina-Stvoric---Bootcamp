// klobuk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int harry;
	int hermiona;
	vector <string>brojeviHarry;
	vector <string> brojeviHermiona;
	string brojHarry;
	string brojHermiona;

	cin >> harry;
	cin.ignore();
	cin >> hermiona;
	cin.ignore();
	
	for (int i = 0; i < harry; i++) {
		string line="";
		getline(cin, line);
		
		brojeviHarry.push_back(line);
	}


	for (int i = 0; i < hermiona; i++) {
		string line="";
		getline(cin, line);
		
		brojeviHermiona.push_back(line);
	}

	for (int i = 0; i < brojeviHarry.size(); i++) {
		
		cout << "HARRY: " << brojeviHarry[i] << endl;
		to_string
	}

	for (int i = 0; i < brojeviHermiona.size(); i++) {

		cout << "HERMIONA: " << brojeviHermiona[i] << endl;
	}

	

	cout << endl;



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
