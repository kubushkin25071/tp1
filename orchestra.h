#pragma once
#include <string>
#include <iostream> // ����-����� �� �����
using namespace std; // ��� �������, ����� � �����-������

/* ������� ����� �������*/

class Orchestra {
protected:
	string name;
	int cost;
	string fio;
public:
	Orchestra(){} // ����������� ��� ����������
	Orchestra(string name, int cost, string fio): name(name), cost(cost), fio(fio) {} //����������� � �����������
	Orchestra(const Orchestra &scr) : name(scr.name), cost(scr.cost), fio(scr.fio) {} // ����������� �����������
	virtual ~Orchestra() {} // ����������� ����������

	virtual void print1(ostream& os) const {			// ��� ������ � �������
		os << "������������:" << name << endl;
		os << "���������:" << cost << endl;
		os << "��� ���������:" << fio << endl;
	}
	virtual void print2(ostream& os) const {			// ��� ������ � ����
		os << name << endl;
		os << cost << endl;
		os << fio << endl;
	}
};
