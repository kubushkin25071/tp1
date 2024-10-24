#pragma once
#include "orchestra.h"

/*����� �������*/

class Drum: public Orchestra {
private:
	string type_d;	// ��� ��������
public:
	Drum() {} // ����������� ��� ����������
	Drum(string type_d, string name, int cost, string fio): Orchestra(name, cost, fio), type_d(type_d) {} //����������� � �����������
	Drum(const Drum& scr) : Orchestra(scr.name, scr.cost, scr.fio), type_d(scr.type_d) {} // ����������� �����������
	~Drum(){}

	void print1(ostream& os) const override {			// ��� ������ � �������
		 Orchestra::print1(os);
		 os << "��� �����������:" << type_d << endl;
	}
	void print2(ostream& os) const override {			// ��� ������ � ����
		Orchestra::print2(os);
		os << type_d << endl;
	}
};

