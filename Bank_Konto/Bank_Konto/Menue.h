#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <Vector>
#include "Konto.h"
#include "Jugendkonto.h"
#include "NormalKonto.h"
using namespace std;

class Menue
{
public:
	Menue();
	~Menue();
	int ShowMenue();
	int Kontoerstellen(vector<Konto*>* accounts);
	void Kontoschlieﬂen(vector<Konto*>* accounts);
	void Kontoeinzahlen(vector<Konto*>* accounts);
	void Kontoauszahlen(vector<Konto*>* accounts);
	void ShowKontostand(vector<Konto*>* accounts);
	void ShowKonto(vector<Konto*> accounts);
	void Ueberweisen(vector<Konto*>* accounts);

private:
	int einlessen();
};

