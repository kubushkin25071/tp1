#pragma once
#include <vector> // ������
#include <fstream>	// ����-����� � ����
#include "brass.h"	// �����
#include "drum.h"	// ��������
#include "string.h" // ��������


/* �����-���������*/
class Keeper{
private:
	vector<Drum*> Drums;
	vector<String*> Strings;
	vector<Brass*> Brasses;
public:
	Keeper();
	~Keeper();
	
};

