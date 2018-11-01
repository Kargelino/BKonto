#pragma once
#include "Konto.h"
#include <iostream>
using namespace std;

class Jugendkonto :
	public Konto
{
public:
	Jugendkonto();
	~Jugendkonto();
	Jugendkonto(int id);
	bool withdraw(int geld) override;

protected:

private:

};

