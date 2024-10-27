#pragma once
#include "orchestra.h"

/* ����� ��������*/

class String: public Orchestra{
private:
	string producer;	// �������������
	string description;	// ������� ��������
public:
	String(); // ����������� ��� ����������
	String(const string& producer, const string& description, const string& name, const int& count, const string& fio, const int& cost);  //����������� � �����������
	String(const String& scr); // ����������� �����������
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

