#pragma once
#include "DataService.h"
#include <Vector>
#include "Konto.h"
#include "Jugendkonto.h"
#include "NormalKonto.h"
#include <string>
#include <fstream>

class FileDataService :
	public DataService
{
public:
	FileDataService();
	~FileDataService();
	void save(vector<Konto*>* accounts);
	void load(vector<Konto*>* accounts);
};

