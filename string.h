#pragma once
#include "orchestra.h"

/* Класс струнных*/

class String: public Orchestra{
private:
	string producer;	// производитель
	string description;	// краткое описание
public:
	String(); // конструктор без параметров
	String(const string& producer, const string& description, const string& name, const int& count, const string& fio, const int& cost);  //конструктор с параметрами
	String(const String& scr); // конструктор копирования
	~String();

	void set_producer(string producer);
	string get_producer();

	void set_description(string description);
	string get_description();

	void display() override ;
	void change_info() override;
	void save_to_file(ostream&) override;
	void load_from_file(istream&) override;
};

