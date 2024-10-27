#pragma once
#include "orchestra.h"

/*����� �������*/

class Drum: public Orchestra {
private:
	string type_d;	// ��� ��������
public:
	Drum(); // ����������� ��� ����������
	Drum(const string& type_d, const string& name, const int& count, const string& fio, const int& cost); //����������� � �����������
	Drum(const Drum& scr); // ����������� �����������
	~Drum(); // ����������

	void set_type_d(string type_d);
	string get_type_d();

	void display() override;
	void change_info() override;
	void save_to_file(ostream&) override;
	void load_from_file(istream&) override;
};

