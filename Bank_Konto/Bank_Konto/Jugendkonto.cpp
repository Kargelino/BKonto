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
	this->state = 1;
}

void Jugendkonto::withdraw(int geld)
{
		if ((balance -= geld) < 0)
		{
			balance += geld;
			throw "Nicht genuegend Geld";
		}
		else
		{
			this->history.push_back(-1 * geld);
		}

}
