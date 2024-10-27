#pragma once
#include "orchestra.h"

/* класс духовых инструментов*/

class Brass: public Orchestra {
private:
	string producer;		// производитель
	string defects;			// дефекты
public:
	Brass(); // конструктор без параметров
	Brass(const string& producer, const string& defects, const string& name, const int& count, const string& fio, const int& cost);//конструктор с параметрами
	Brass(const Brass& scr); // конструктор копирования
	~Brass();

	void set_producer(string producer);
	string get_producer();

	void set_defects(string defects);
	string get_defects();

	void display() override;
	void change_info() override;
	void save_to_file(ostream&) override;
	void load_from_file(istream&) override;
};

