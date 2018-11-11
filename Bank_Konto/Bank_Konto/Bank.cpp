#include "pch.h"
#include "Bank.h"

Bank::Bank()
{
}


Bank::~Bank()
{
}

void Bank::showMenue()
{
	DataService *FileSystem = new FileDataService;
	FileSystem->load(&accounts);
	while (true)
	{
		int j;
		switch (menue.ShowMenue())
		{
		case 1: menue.ShowKonto(accounts);
			j = menue.Kontoerstellen(&accounts);break;
		case 2: menue.Kontoschließen(&accounts); break;
		case 3: menue.Kontoeinzahlen(&accounts); break;
		case 4: menue.Kontoauszahlen(&accounts); break;
		case 5: menue.Ueberweisen(&accounts); break;
		case 6: menue.ShowKontostand(&accounts); break;
		}
		FileSystem->save(&accounts);
	}
	

}
