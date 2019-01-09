#pragma once
#ifndef zivotinje
#define zivotinje
#include <string>

using namespace std;

class Zivotinja {
public:
	string ime = "";
	string vrsta = "";
	int god;
	void trcanje();
	void glasanje();
};

#endif 