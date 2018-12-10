// tuna.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int brojtuna, x;
	int p1, p2, p3;
	vector < vector<int> > vektor;
	int zbroj=0;

	cin >> brojtuna >> x;
	

	for (int i = 0; i < brojtuna; i++) {
		cin >> p1 >> p2;
		//vektor[i].push_back(p1);
		//vektor[i].push_back(p2);
		//vektor[i].push_back(p3);
		if (abs(p1 - p2) <= x) {
			if (p1 > p2) {
				zbroj += p1;
			}
			else if (p2 > p1) {
				zbroj += p2;
			}
			else {
				zbroj += p2;
			}
		}
		else {
			cin >> p3;
			zbroj += p3;
		}
		
	}
	
	cout << zbroj;

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
