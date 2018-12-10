// multidimenzionalnapolja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>


using namespace std;

int main()
{
	/*
	int polje[10][10];


	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << (i * j)*3 << "\t";
		}
		cout << endl;
	}
	*/

	/*
	int d, s, v;
	cin >> d >> s >> v;
	int polje[2][2][3];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int z = 0; z < 3; z++) {
				cin >> polje[i][j][z];
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int z = 0; z < 3; z++) {
				cout << "Element [" << i << "][" << j << "][" << z << "] = " << polje[i][j][z] << endl;
			}
		}
	}

	*/
	
	/*  -------------------------------------------napravi ovo isto ali sa poljima!!!!!!!!!!!!!!!!!!!!!!!!!!!
	for (int i = 1; i <= 9; i++) {

		for (int j = 1; j <= 9; j++) {
			if (i == j) {
				cout << 'x' << "\t";
				
			}
			else if (i+j==10) {
				cout << 'x' << "\t";
			}
			else {
				cout << 'o' << "\t";
			}
		}

		cout << endl;
	}
	*/

	int n;
	cin >> n;
	char polje[9][9];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				polje[i][j] = 'x';
			}
			else if (i+j==n-1) {
				polje[i][j] = 'x';
			}
			else {
				polje[i][j] = 'o';
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << polje[i][j] << "\t";
		}
		cout << endl;
	}


	/*
	int x;
	vector <vector<int>> v;

	for (int i = 0; i < 2; i++) {
		vector <int> temp;
		for (int j = 0; j < 2; j++) {
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}

	for (int i = 0; i < 2; i++) {
		
		for (int j = 0; j < 2; j++) {
			cout << v[i][j] <<"\t";
		}
		cout << endl;
	}
	*/

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
