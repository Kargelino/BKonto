#pragma once
#include "Bank.h"

class Singleton
{
public:
	~Singleton();
	static Singleton* getInstance();
	void method();

private:
	Singleton();		
	static bool instanceFlag;
	static Singleton* single;
};

