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
	Keeper();	// конструктор по-умолчанию
	~Keeper();	// деструктор

	Read_file(string file_name);
	Write_file(string file_name);

	Add_instrument(string toi, string name, int cost, string fio, string tp1, string tp2);		//tp1 и tp2 - поля, которые имеют различное назначение у параметров
	Delete_instrument(string toi, int index);

	vector<Drum*> GetDrums();
	vector<String*> GetStrings();
	vector<Brass*> GetBrasses();
};

