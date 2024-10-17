#pragma once
#include <vector> // массив
#include <fstream>	// ввод-вывод в файл
#include "brass.h"	// трубы
#include "drum.h"	// барабаны
#include "string.h" // струнные


/* Класс-контейнер*/
class Keeper{
private:
	vector<Drum*> Drums;
	vector<String*> Strings;
	vector<Brass*> Brasses;
public:
	Keeper();
	~Keeper();
	
};

