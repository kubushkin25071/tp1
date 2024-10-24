#pragma once
#include "orchestra.h"

/* ����� ������� ������������*/

class Brass: public Orchestra {
private:
	string producer;		// �������������
	string defects;			// �������
public:
	Brass() {} // ����������� ��� ����������
	Brass(string producer, string defects, string name, int cost, string fio) : Orchestra(name, cost, fio), producer(producer), defects(defects) {} //����������� � �����������
	Brass(const Brass& scr) : Orchestra(scr.name, scr.cost, scr.fio), producer(scr.producer), defects(scr.defects) {} // ����������� �����������
	~Brass() {}

	void print1(ostream& os) const override {			// ��� ������ � �������
		Orchestra::print1(os);
		os << "�������������:" << producer << endl;
		os << "�������:" << defects << endl;
	}
	void print2(ostream& os) const override {			// ��� ������ � ����
		Orchestra::print2(os);
		os << producer << endl;
		os << defects << endl;
	}
};

