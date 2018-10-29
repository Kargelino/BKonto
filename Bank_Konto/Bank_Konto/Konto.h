#pragma once
#include <vector>

using namespace std;

class Konto
{
public:
	Konto();
	~Konto();
	Konto(int id);

	void deposit(int geld);		// deposit = Einzahlen
	int getBalance();			// getBalance = Aktueller Kontostand;
	vector<int> getHistory();	// Kontobewegung zurückgeben
	int getid();				// Kontonummer zurückgeben

protected:

	void withdraw(int geld);	//withdraw = Abheben

private:

	int id;
	int balance = 0;
	vector<int> history;


};

