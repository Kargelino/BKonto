#pragma once
#include "Konto.h"
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

};

