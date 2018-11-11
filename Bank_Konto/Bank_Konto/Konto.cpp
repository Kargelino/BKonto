#include "pch.h"
#include "Konto.h"


Konto::Konto()
{
}


Konto::~Konto()
{
}

Konto::Konto(int id)
{
	this->id = id;
}

void Konto::deposit(int geld)
{
	history.push_back(geld);
	this->balance += geld;
}

int Konto::getBalance()
{
	return this->balance;
}

vector<int> Konto::getHistory()
{
	return this->history;
}

int Konto::getid()
{
	return this->id;
}

void Konto::withdraw(int geld)
{
	try
	{
		this->history.push_back(-1 * geld);
		this->balance -= geld;
	}
	catch (...)
	{
	}
}

int Konto::getState()
{
	return this->state;
}
