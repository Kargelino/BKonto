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
	vector<int> getHistory();			// Kontobewegung zurückgeben
	int getid();						// Kontonummer zurückgeben
	virtual bool withdraw(int geld);	//withdraw = Abheben
protected:
	int balance = 0;
	vector<int> history;
	int id;
private:

};

