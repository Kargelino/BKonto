#pragma once
#include "Konto.h"
class NormalKonto :
	public Konto
{
public:
	NormalKonto();
	~NormalKonto();
	void withdraw(int geld);
};

