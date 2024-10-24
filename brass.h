#pragma once
#include "orchestra.h"

/* класс духовых инструментов*/

class Brass: public Orchestra {
private:
	string producer;		// производитель
	string defects;			// дефекты
public:
	Brass() {} // конструктор без параметров
	Brass(string producer, string defects, string name, int cost, string fio) : Orchestra(name, cost, fio), producer(producer), defects(defects) {} //конструктор с параметрами
	Brass(const Brass& scr) : Orchestra(scr.name, scr.cost, scr.fio), producer(scr.producer), defects(scr.defects) {} // конструктор копировани€
	~Brass() {}

	void print1(ostream& os) const override {			// дл€ вывода в консоль
		Orchestra::print1(os);
		os << "ѕроизводитель:" << producer << endl;
		os << "ƒефекты:" << defects << endl;
	}
	void print2(ostream& os) const override {			// дл€ вывода в файл
		Orchestra::print2(os);
		os << producer << endl;
		os << defects << endl;
	}
};

