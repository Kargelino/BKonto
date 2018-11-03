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
	try {

		if ((this->balance -= geld) < 500)
		{
			this->balance += geld;
			throw "\nUeberziehungsrahmen von 500 ueberschritten";
		}
		else {
			this->history.push_back(-1 * geld);
			return true;
		}
	}
	catch(...)
	{
		cout << "\nUeberziehungsrahmen von 500 ueberschritten" << endl;
	}
}

