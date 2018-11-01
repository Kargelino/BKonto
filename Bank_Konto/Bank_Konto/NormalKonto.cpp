#include "pch.h"
#include "NormalKonto.h"


NormalKonto::NormalKonto()
{
}


NormalKonto::~NormalKonto()
{
}

NormalKonto::NormalKonto(int id)
{
	this->id = id;
}

bool NormalKonto::withdraw(int geld)
{
	if ((this->balance -= geld) < 500)
	{
		cout << "\nUeberziehungsrahmen von 500 ueberschritten";
		this->balance += geld;
		return false;
	}
	else
	{
		this->history.push_back(-1 * geld);
		return true;
	}
}

