#pragma once
#include "Konto.h"
class NormalKonto :
	public Konto
{
public:
	NormalKonto();
	~NormalKonto();
	NormalKonto(int id);
	void withdraw(int geld) override;
};

