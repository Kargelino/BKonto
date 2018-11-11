#include "pch.h"
#include "FileDataService.h"


FileDataService::FileDataService()
{
}


FileDataService::~FileDataService()
{
}

void FileDataService::save(vector<Konto*>* accounts)
{
	fstream Datei;
	Datei.open("KontoDaten.dat", ios::out);
	for (auto KontoDaten : *accounts) {

		Datei << KontoDaten->getid() << ";" << KontoDaten->getBalance() << ";" << KontoDaten->getState() << endl;
	}
	Datei.close();
}

void FileDataService::load(vector<Konto*>* accounts)
{
	ifstream Datei;
	string buffer = "";
	Datei.open("KontoDaten.dat", ios::in);
	if (!Datei.is_open()) {}
	else {
		while (!Datei.eof())
		{
			getline(Datei, buffer, ';');
			int Knr = atoi(buffer.c_str());
			getline(Datei, buffer, ';');
			int balance = atoi(buffer.c_str());
			getline(Datei, buffer, '\n');
			int state = atoi(buffer.c_str());
			if (state == 1)
			{
				Konto* account = new Jugendkonto(Knr);
				account->deposit(balance);
				accounts->push_back(account);
			}
			else if (state == 2)
			{
				Konto* account = new NormalKonto(Knr);
				account->deposit(balance);
				accounts->push_back(account);
			}
		}
		Datei.close();
	}
}
