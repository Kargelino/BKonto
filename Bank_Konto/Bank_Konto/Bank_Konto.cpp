#include "pch.h"
#include <iostream>
#include "Singleton.h"


int main()
{
	Singleton *Bank = Singleton::getInstance();
	Bank->method();
	Bank = NULL;
	
}

