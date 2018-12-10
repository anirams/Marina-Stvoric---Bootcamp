// varijable 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	string ip = "";
	getline(cin, ip);
	
	cout << ip << endl;
	*/

	string str1 = "welcome";
	string str2 = "w3resource";
	string recenica = "";

	//string 1
	cout << "------------------string 1-------------------" << endl;
	cout << "velicina string 1 je: " << str1.size() << endl;
	cout << "char na poziciji 3: " << str1.at(3) << endl;
	cout << "empty? " << str1.empty() << endl;
	cout << "4 znaka od 3. indexa ....... " << str1.substr(3, 4) << endl;
	cout << "replace ...... " << str1.replace(3, 4, "went") << endl;
	cout << "dodati ............. " << str1.append("nestonesto") << endl;
	cout << "ubaci ubacivanje .......... " << str1.insert(3, "ubacivanje") << endl;

	//string 2
	cout << "------------------string 2-------------------" << endl;
	cout << "velicina string 2 je: " << str2.size() << endl;
	cout << "char na poziciji 3: " << str2.at(3) << endl;
	cout << "empty? " << str2.empty() << endl;
	cout << "4 znaka od 3. indexa ....... " << str2.substr(3, 4) << endl;
	cout << "replace ...... " << str2.replace(3, 4, "went") << endl;
	cout << "dodati ............. " << str2.append("nestonesto") << endl;
	cout << "ubaci ubacivanje .......... " << str2.insert(3, "ubacivanje") << endl;


	cout << "unesite recenicu: " << endl;
	getline(cin, recenica);
	cout << recenica;

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
