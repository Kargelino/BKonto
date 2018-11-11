#pragma once
#include "Konto.h"
#include <string>
#include <iostream>
#include "Menue.h"
#include "Jugendkonto.h"
#include "NormalKonto.h"
#include "DataService.h"
#include "FileDataService.h"
using namespace std;

class Bank
{
public:
	Bank();
	~Bank();
	void showMenue();

protected:

private:

	vector<Konto*> accounts;
	Konto* getAccount(int id);
	void addAccount();
	void deleteAccount(int id);
	void manipulate(int id);
	Menue menue;
};

