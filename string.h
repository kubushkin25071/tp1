#pragma once
#include "orchestra.h"

/* Класс струнных*/

class String: public Orchestra{
private:
	string name;
	string producer;
	int cost;
	string fio;
	string description;
public:
	String();
	~String();
};

