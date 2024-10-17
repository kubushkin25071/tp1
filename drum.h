#pragma once
#include "orchestra.h"

/*Класс ударных*/

class Drum: public Orchestra {
private:
	string type_d;
	string name;
	int cost;
	string fio;
public:
	Drum();
	~Drum();

};

