#include "orchestra.h"

Orchestra::Orchestra() {
	cout << "������ ����������� ��� ���������� ��� Base ������\n"; } // ����������� ��� ����������

Orchestra::Orchestra(const string& name, const int& count, const string& fio, const int& cost): name(name), count(count), fio(fio), cost(cost) {
	cout << "������ ����������� � ����������� ��� Base ������\n";} //����������� � �����������

Orchestra::Orchestra(const Orchestra& scr): name(scr.name), cost(scr.cost), fio(scr.fio), count(scr.count) {
	cout << "������ ����������� ����������� ��� Base ������\n"; } // ����������� �����������

Orchestra::~Orchestra() {
	cout << "������ ����������� ���������� ��� Base ������\n"; }  // ����������� ����������

std::string Orchestra::getName(){
    return name;
}

void Orchestra::setName(const std::string& name) {
    this->name = name;
}

std::string Orchestra::getFio(){
    return fio;
}

void Orchestra::setFio(const std::string& fio) {
    this->fio = fio;
}

int Orchestra::getCost(){
    return cost;
}

void Orchestra::setCost(int cost) {
    this->cost = cost;
}

int Orchestra::getCount(){
    return count;
}

void Orchestra::setCount(int count) {
    this->count = count;
}