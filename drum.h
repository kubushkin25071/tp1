#pragma once
#include "orchestra.h"

/*����� �������*/

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

