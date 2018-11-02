#include "pch.h"
#include "Singleton.h"


Singleton::Singleton()
{
}


Singleton::~Singleton()
{
	instanceFlag = false;
}

bool Singleton::instanceFlag = false;
Singleton* Singleton::single = NULL;

void Singleton::method()
{
	Bank MeineBank;
	MeineBank.showMenue();
}

Singleton* Singleton::getInstance()
{
	if (!instanceFlag)
	{
		single = new Singleton();
		instanceFlag = true;
		return single;
	}
	else
	{
		return single;
	}
}