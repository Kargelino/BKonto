#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Konto
{
public:
	Konto();
	~Konto();
	Konto(int id);

	void deposit(int geld);				// deposit = Einzahlen
	int getBalance();					// getBalance = Aktueller Kontostand;
	vector<int> getHistory();			// Kontobewegung zur�ckgeben
	int getid();						// Kontonummer zur�ckgeben
	virtual void withdraw(int geld);	//withdraw = Abheben
	int getState();
protected:
	int balance = 0;
	vector<int> history;
	int id;
	int state = 0;
private:

};

