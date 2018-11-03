#pragma once
#include "Konto.h"
#include <iostream>
#include <string>
using namespace std;

class Jugendkonto :
	public Konto
{
public:
	Jugendkonto();
	~Jugendkonto();
	Jugendkonto(int id);
	void withdraw(int geld) override;

protected:

private:

};

