#pragma once
#include "orchestra.h"

/* ����� ��������*/

class String: public Orchestra{
private:
	string producer;	// �������������
	string description;	// ������� ��������
public:
	String() {} // ����������� ��� ����������
	String(string producer, string description, string name, int cost, string fio) : Orchestra(name, cost, fio), producer(producer), description(description) {} //����������� � �����������
	String(const String& scr) : Orchestra(scr.name, scr.cost, scr.fio), producer(scr.producer), description(scr.description) {} // ����������� �����������
	~String() {}

	void print1(ostream& os) const override {			// ��� ������ � �������
		Orchestra::print1(os);
		os << "�������������:" << producer << endl;
		os << "������� ��������:" << description << endl;
	}
	void print2(ostream& os) const override {			// ��� ������ � ����
		Orchestra::print2(os);
		os << producer << endl;
		os << description << endl;
	}
};

