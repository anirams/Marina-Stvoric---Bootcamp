// trener.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int lin1, lin2, lin3;
	int feng1, feng2, feng3;
	int tao1, tao2, tao3;
	int lin, feng, tao;
	
	cin >> lin1 >> lin2 >> lin3 >> feng1 >> feng2 >> feng3 >> tao1 >> tao2 >> tao3;

	switch (lin1) {
	case 0: 
			lin1 = 0;
			break;
	case 1:
		lin1 = 4;
		break;
	case 2:
		lin1 = 6;
		break;
	case 3:
		lin1 = 8;
		break;
	case 4:
		lin1 = 10;
	}
	
	switch (lin2) {
	case 0:
			lin2 = 0;
			break;
	case 1:
		lin2 = 4;
		break;
	case 2:
		lin2 = 6;
		break;
	case 3:
		lin2 = 8;
		break;
	case 4:
		lin2 = 10;
	}
	switch (lin3) {
	case 0:
			lin3 = 0;
			break;
	case 1:
		lin3 = 4;
		break;
	case 2:
		lin3 = 6;
		break;
	case 3:
		lin3 = 8;
		break;
	case 4:
		lin3 = 10;
	}


	switch (tao1) {
	case 0:
			tao1 = 0;
			break;
	case 1:
		tao1 = 4;
		break;
	case 2:
		tao1 = 6;
		break;
	case 3:
		tao1 = 8;
		break;
	case 4:
		tao1 = 10;
		break;
	}
	switch (tao2) {
	case 0:
			tao2 = 0;
			break;
	case 1:
		tao2 = 4;
		break;
	case 2:
		tao2 = 6;
		break;
	case 3:
		tao2 = 8;
		break;
	case 4:
		tao2 = 10;
		break;
	}
	switch (tao3) {
	case 0:
			tao3 = 0;
			break;
	case 1:
		tao3 = 4;
		break;
	case 2:
		tao3 = 6;
		break;
	case 3:
		tao3 = 8;
		break;
	case 4:
		tao3 = 10;
		break;
	}
	switch (feng1) {
	case 0:
			feng1 = 0;
			break;
	case 1:
		feng1 = 4;
		break;
	case 2:
		feng1 = 6;
		break;
	case 3:
		feng1 = 8;
		break;
	case 4:
		feng1 = 10;
		break;
	}
	switch (feng2) {
	case 0:
			feng2 = 0;
			break;
	case 1:
		feng2 = 4;
		break;
	case 2:
		feng2 = 6;
		break;
	case 3:
		feng2 = 8;
		break;
	case 4:
		feng2 = 10;
		break;
	}
	switch (feng3) {
	case 0:
			feng3 = 0;
			break;
	case 1:
		feng3 = 4;
		break;
	case 2:
		feng3 = 6;
		break;
	case 3:
		feng3 = 8;
		break;
	case 4:
		feng3 = 10;
		break;
	}

	lin = lin1 + lin2 + lin3;
	tao = tao1 + tao2 + tao3;
	feng = feng1 + feng2 + feng3;

	if (lin == tao && lin > feng && tao > feng) {
		cout << "LIN " << lin << endl;
		cout << "TAO " << tao;
	}
	else if (lin == feng && lin > tao && feng > tao) {
		cout << "LIN " << lin << endl;
		cout << "FENG " << feng;
	}
	else if (feng == tao && feng > lin && tao > lin) {
		cout << "FENG " << feng << endl;
		cout << "TAO " << tao;
	}
	else if (lin > tao && lin > feng) {
		cout << "LIN " << lin;
	}
	else if (tao > lin && tao > feng) {
		cout << "TAO " << tao;
	}
	else if (feng > lin && feng > tao) {
		cout << "FENG " << feng;
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
