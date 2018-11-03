#include "pch.h"
#include "Menue.h"


Menue::Menue()
{
}


Menue::~Menue()
{
}

int Menue::ShowMenue()
{
	int i = 0;
	try
	{
		while (true) {
			cout << "\n\n________________________________________________\n";
			cout << "\n\nHauptmen\x81 ihrer Bank !!\n\n";
			cout << "_______________________________\n";
			cout << "| 1   Konto er\x94 \bffnen!	      |\n";
			cout << "| 2   Konto schliessen!	      |\n";
			cout << "| 3   Geld einzahlen          |\n";
			cout << "| 4   Geld auszahlen	      |\n";
			cout << "| 5   Ueberweisen	      |\n";
			cout << "| 6   Kontostand	      |\n";
			cout << "-------------------------------\n\n";

			cout << "Bitte w\x84 \bhlen sie:";
			
			cin >> i;
			if (cin.fail() || i<1 || i>6) {
				cin.clear();
				cin.ignore();
				cout << "\n\n!!!Eingabe nicht ERKANNT!!!\n\n";
				i = 0;
			}
			else break;
		}
	}
	catch (...) { return 7;}
	return i;
}

int Menue::Kontoerstellen(vector<Konto*>* accounts)
{
	int i = 0, Knr = 0;
	bool Vorhanden = false;
	
		cout << "\n_______________________________\n";
		cout << "\nKonto Erstellung !!\n\n";
		cout << "_______________________________\n";
		cout << "| 1   Jugend-Konto!	      |\n";
		cout << "| 2   Giro-Konto!	      |\n";
		cout << "------------------------------\n";
		while(true)
		{
			cout << "\n Ihre Eingabe: ";
			i = einlessen();
			if (i >= 1 && i <= 2)break;
		}
		
	while(true)
	{
		cout << "\n Bitte um Eingabe der Kontonummer:\n";
		Knr = einlessen();
		
		for (Konto* u : *accounts)
		{
			if (Knr == u->getid())Vorhanden = true;
		}
		if (!Vorhanden) break;
		else 
		{
			cout << "\nKontonummer Vorhanden\n";
			Vorhanden = false;
		}
	}
	if (i == 1) {
		Konto* account = new Jugendkonto(Knr);
		accounts->push_back(account);
		cout << "\n Jugend Konto erstellt mit der Nummer: " << account->getid() << "\n\n";
	}
	else if (i == 2) {
		Konto* account = new NormalKonto(Knr);
		accounts->push_back(account);
		cout << "\n Giro Konto erstellt mit der Nummer: " << account->getid() << "\n\n";
	}
	return 0;
}

void Menue::Kontoschließen(vector<Konto*>* accounts)
{
	int kontonummer;
	cout << "\n_______________________________\n";
	cout << "Konto Schliessung !!\n\n";
	cout << "_______________________________\n";
	cout << "| Bitte Kontonummer eingeben: |\n";
	cout << "------------------------------\n";
	kontonummer = einlessen();
	
	int i = 0;
	for (Konto* Account : *accounts) {
		if (kontonummer == Account->getid()) {
			accounts->erase(accounts->begin() + i);
			cout << "\n Erfolgreich geloescht\n";
		}i++;
	};
}

void Menue::Kontoeinzahlen(vector<Konto*>* accounts)
{
	int Betrag,Knr;
	cout << "\n\n Bitte um Kontonummer:";
	Knr = einlessen();
	
	cout << "\n\n Bitte den Betrag der auf das Konto gebucht werden soll:";
	Betrag = einlessen();
	
	for (Konto* DasKonto : *accounts) {
		if (Knr == DasKonto->getid()) {
			DasKonto->deposit(Betrag);
		}
	}



}

void Menue::Kontoauszahlen(vector<Konto*>* accounts)
{
	int Betrag, Knr;
	cout << "\n\n Bitte um Kontonummer:";
	Knr = einlessen();
	
	cout << "\n\n Bitte den Betrag eingeben der vom Konto abgehoben werden soll:";
	Betrag = einlessen();

	for (Konto* DasKonto : *accounts) {
		if (Knr == DasKonto->getid()) {
			DasKonto->withdraw(Betrag);
		}
	}
}

void Menue::ShowKontostand(vector<Konto*>* accounts)
{
	int Knr;
	cout << "\n\n Bitte um Kontonummer:";
	Knr = einlessen();
	
	for (Konto* DasKonto : *accounts) {
		if (Knr == DasKonto->getid()) {
			cout << "\n Aktueller Konntostand ist: " << DasKonto->getBalance() << endl;
		}
	}
}

void Menue::ShowKonto(vector<Konto*> accounts)
{
	if (accounts.size() >= 1) {
		cout << "\n\n Alle erstellten Konten:\n\n";
		int j = 1;
		for (Konto* i : accounts) {
			cout << j << " Kontonummer: " << i->getid() << endl; j++;
		}
	}
}

void Menue::Ueberweisen(vector<Konto*>* accounts)
{
	int Knr1,Knr2,Betrag;
	cout << "\n\n Von welcher Kontonummer soll ueberwiesen werden:";
	Knr1 = einlessen();
		
	cout << "\n\n An welche Kontonummer soll ueberwiesen werden:";
	Knr2 = einlessen();
		
	cout << "\n\n Wieviel soll ueberwisen werden:";
	Betrag = einlessen();

	bool inOrdnung = false;
	for (Konto* konto : *accounts)
	{
		if (Knr1 == konto->getid())
			inOrdnung = konto->withdraw(Betrag);
	}
	if (inOrdnung)
	{
		for (Konto* konto : *accounts)
		{
			if (Knr2 == konto->getid())
				konto->deposit(Betrag);
		}
	}
}

int Menue::einlessen()
{
	int Betrag;
	while (true)
	{
		cin >> Betrag;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "\n Fehler bei der Eingabe, bitte geben sie eine richtige Eingabe ein: ";
		}
		else break;
	}
	return Betrag;
}
