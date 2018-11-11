#pragma once
#include <Vector>
#include "Konto.h"
#include "Jugendkonto.h"
#include "NormalKonto.h"
#include <string>
#include <fstream>
using namespace std;

class DataService
{
public:
	DataService();
	~DataService();
	virtual void save(vector<Konto*>* accounts) = 0;
	virtual void load(vector<Konto*>* accounts) = 0;
};

