#pragma once
#include <string>
#include <iostream> // ввод-вывод на экран
using namespace std; // для вектора, строк и ввода-вывода

/* Базовый класс Оркестр*/

class Orchestra {
protected:
	string name;
	int cost;
	string fio;
public:
	Orchestra(){} // конструктор без параметров
	Orchestra(string name, int cost, string fio): name(name), cost(cost), fio(fio) {} //конструктор с параметрами
	Orchestra(const Orchestra &scr) : name(scr.name), cost(scr.cost), fio(scr.fio) {} // конструктор копирования
	virtual ~Orchestra() {} // виртуальный деструткор

	virtual void print1(ostream& os) const {			// для вывода в консоль
		os << "Наименование:" << name << endl;
		os << "Стоимость:" << cost << endl;
		os << "ФИО владельца:" << fio << endl;
	}
	virtual void print2(ostream& os) const {			// для вывода в файл
		os << name << endl;
		os << cost << endl;
		os << fio << endl;
	}
};
