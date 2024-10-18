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
	Keeper();	// ����������� ��-���������
	~Keeper();	// ����������

	Read_file(string file_name);
	Write_file(string file_name);

	Add_instrument(string toi, string name, int cost, string fio, string tp1, string tp2);		//tp1 � tp2 - ����, ������� ����� ��������� ���������� � ����������
	Delete_instrument(string toi, int index);

	vector<Drum*> GetDrums();
	vector<String*> GetStrings();
	vector<Brass*> GetBrasses();
};

