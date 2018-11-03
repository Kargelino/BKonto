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
	try {
		if ((balance -= geld) < 0)
		{
			balance += geld;
			throw "Nicht genuegend Geld";
		}
		else
		{
			this->history.push_back(-1 * geld);
			return true;
		}
	}
	catch (...) {
		cout << "Nicht genuegend Geld" << endl;
	}
}
