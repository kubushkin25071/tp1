#pragma once
#include <string>
#include <iostream> // ввод-вывод на экран
#include <fstream>	// ввод-вывод в файл
#include "check.h"

using namespace std; // для строк и ввода-вывода

/* Базовый класс Оркестр*/

class Orchestra {
protected:
	string name;
	int count;
	string fio;
	int cost;
public:
	Orchestra(); // конструктор без параметров
	Orchestra(const string& name, const int& count, const string& fio, const int& cost);//конструктор с параметрами
	Orchestra(const Orchestra& scr); // конструктор копирования
	virtual ~Orchestra();  // виртуальный деструткор

	string getName();
	void setName(const string& name);

	string getFio();
	void setFio(const string& fio);

	int getCost();
	void setCost(int cost);

	int getCount();
	void setCount(int count);

	virtual void display() = 0;	// вывод на экран
	virtual void change_info() = 0;	// поменять инфу
	virtual void save_to_file(ostream&) = 0;
	virtual void load_from_file(istream&) = 0;
};
