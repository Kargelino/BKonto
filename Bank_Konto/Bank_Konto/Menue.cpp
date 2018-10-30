#include "pch.h"
#include "Menue.h"


Menue::Menue()
{
}


Menue::~Menue()
{
}

int Menue::ShowMenue()
{
	int i = 0;
	try
	{
		while (true) {
			cout << "Hauptmen\x81 ihrer Bank !!\n\n";
			cout << "_______________________________\n";
			cout << "| 1   Konto er\x94 \bffnen!	      |\n";
			cout << "| 2   Konto schliessen!	      |\n";
			cout << "| 3   Geld einzahlen          |\n";
			cout << "| 4   Geld auszahlen	      |\n";
			cout << "| 5   Kontoauszug	      |\n";
			cout << "| 6   Kontostand	      |\n";
			cout << "-------------------------------\n\n";

			cout << "Bitte w\x84 \bhlen sie:";
			
			cin >> i;
			if (cin.fail() || i<1 || i>6) {
				cin.clear();
				cin.ignore();
				cout << "\n\n!!!Eingabe nicht ERKANNT!!!\n\n";
				i = 0;
			}
			else break;
		}
	}
	catch (...) { return 7;}
	return i;
}
