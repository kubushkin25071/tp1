#pragma once
#include <string>
#include <iostream> // ����-����� �� �����
#include <fstream>	// ����-����� � ����
#include "check.h"

using namespace std; // ��� ����� � �����-������

/* ������� ����� �������*/

class Orchestra {
protected:
	string name;
	int count;
	string fio;
	int cost;
public:
	Orchestra(); // ����������� ��� ����������
	Orchestra(const string& name, const int& count, const string& fio, const int& cost);//����������� � �����������
	Orchestra(const Orchestra& scr); // ����������� �����������
	virtual ~Orchestra();  // ����������� ����������

	string getName();
	void setName(const string& name);

	string getFio();
	void setFio(const string& fio);

	int getCost();
	void setCost(int cost);

	int getCount();
	void setCount(int count);

	virtual void display() = 0;	// ����� �� �����
	virtual void change_info() = 0;	// �������� ����
	virtual void save_to_file(ostream&) = 0;
	virtual void load_from_file(istream&) = 0;
};
