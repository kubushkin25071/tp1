#pragma once
#include "orchestra.h"

/* ����� ����*/

class Brass: public Orchestra {
private:
	string name;
	string producer;
	int cost;
	string fio;
	string defects;
public:
	Brass();
	~Brass();
};

