#pragma once
#include "orchestra.h"

/* Класс струнных*/

class String: public Orchestra{
private:
	string producer;	// производитель
	string description;	// краткое описание
public:
	String() {} // конструктор без параметров
	String(string producer, string description, string name, int cost, string fio) : Orchestra(name, cost, fio), producer(producer), description(description) {} //конструктор с параметрами
	String(const String& scr) : Orchestra(scr.name, scr.cost, scr.fio), producer(scr.producer), description(scr.description) {} // конструктор копирования
	~String() {}

	void print1(ostream& os) const override {			// для вывода в консоль
		Orchestra::print1(os);
		os << "Производитель:" << producer << endl;
		os << "Краткое описание:" << description << endl;
	}
	void print2(ostream& os) const override {			// для вывода в файл
		Orchestra::print2(os);
		os << producer << endl;
		os << description << endl;
	}
};

