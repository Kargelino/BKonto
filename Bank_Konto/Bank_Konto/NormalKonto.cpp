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
	this->state = 2;
}

void NormalKonto::withdraw(int geld)
{
	if ((this->balance -= geld) < 500)
	{
		this->balance += geld;
		throw "\nUeberziehungsrahmen von 500 ueberschritten";
	}
	else {
		this->history.push_back(-1 * geld);
	}
}

