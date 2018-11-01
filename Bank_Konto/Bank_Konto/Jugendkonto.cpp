#include "pch.h"
#include "Jugendkonto.h"


Jugendkonto::Jugendkonto()
{
}


Jugendkonto::~Jugendkonto()
{
}

Jugendkonto::Jugendkonto(int id)
{
	this->id = id;
}

bool Jugendkonto::withdraw(int geld)
{
	try 
	{
		unsigned int i = balance;
		if ((i -= geld) >= 0)
		{
			this->balance = i;
			this->history.push_back(-1 * geld);
			return true;
		}
		else
		{
			return false;
		}
	}
	catch (exception&) {
		cout << "\n Nicht Genuegend Geld Vorhanden \n";
		return false;
	}

}
