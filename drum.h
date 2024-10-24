#pragma once
#include "orchestra.h"

/*Класс ударных*/

class Drum: public Orchestra {
private:
	string type_d;	// тип барабана
public:
	Drum() {} // конструктор без параметров
	Drum(string type_d, string name, int cost, string fio): Orchestra(name, cost, fio), type_d(type_d) {} //конструктор с параметрами
	Drum(const Drum& scr) : Orchestra(scr.name, scr.cost, scr.fio), type_d(scr.type_d) {} // конструктор копирования
	~Drum(){}

	void print1(ostream& os) const override {			// для вывода в консоль
		 Orchestra::print1(os);
		 os << "Тип инструмента:" << type_d << endl;
	}
	void print2(ostream& os) const override {			// для вывода в файл
		Orchestra::print2(os);
		os << type_d << endl;
	}
};

