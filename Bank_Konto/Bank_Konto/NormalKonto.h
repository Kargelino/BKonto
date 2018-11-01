#pragma once
#include "Konto.h"
class NormalKonto :
	public Konto
{
public:
	NormalKonto();
	~NormalKonto();
	NormalKonto(int id);
	bool withdraw(int geld) override;
};

