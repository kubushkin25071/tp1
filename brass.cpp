#include "brass.h"

// ����������� ��� ����������
Brass::Brass() : Orchestra("none", 0, "none", 0), producer(""), defects("") {
    cout << "������ ����������� ��� ���������� ��� Brass ������\n";
}

// ����������� � �����������
Brass::Brass(const string& producer, const string& defects, const string& name, const int& count, const string& fio, const int& cost) :
    Orchestra(name, count, fio, cost), producer(producer), defects(defects) {
    cout << "������ ����������� � ����������� ��� Brass ������\n";
}

// ����������� �����������
Brass::Brass(const Brass& scr) : Orchestra(scr.name, scr.count, scr.fio, scr.cost), producer(scr.producer), defects(scr.defects) {
    cout << "������ ����������� ����������� ��� Brass ������\n";
}

//����������
Brass::~Brass() { cout << "������ ����������  ��� Brass ������\n"; }

// ��������� �������������
void Brass::set_producer(string producer) {
    this->producer = producer;
}

// ��������� �������������
string Brass::get_producer() {
    return this->producer;
}

// ��������� �������� ��������
void Brass::set_defects(string defects) {
    this->defects = defects;
}

// ��������� ��������
string Brass::get_defects() {
    return this->defects;
}

// ����� �� �����
void Brass::display() {
    cout << "�������� �����������: " << this->name << endl;
    cout << "����������: " << this->count << endl;
    cout << "��������: " << this->fio << endl;
    cout << "��������� �����: " << this->cost << endl;
    cout << "�������������: " << this->producer << endl;
    cout << "�������: " << this->defects << endl;
}

// �������� ��������
void Brass::change_info() {
    string newproducer, newdefects, newname, newfio;
    int newcost, newcount, choice;

    cout << "�������� ���������� ��� ���������:" << endl;
    cout << "1 - ��������" << endl;
    cout << "2 - �����������" << endl;
    cout << "3 - ��������" << endl;
    cout << "4 - ��������� �����" << endl;
    cout << "5 - �������������" << endl;
    cout << "6 - �������" << endl;
    cout << "0 - �����" << endl;
    choice = check_input();

    switch (choice) {
    case 1:
        cout << "������� ����� ��������: " << endl;
        getline(cin, newname);
        setName(newname);
        cout << "������ ������� ��������" << endl;
        break;
    case 2:
        cout << "������� ����� ���-��: " << endl;
        newcount = check_input();
        setCount(newcount);
        cout << "������ ������� ��������" << endl;
        break;
    case 3:
        cout << "������� ������ ���������: " << endl;
        getline(cin, newfio);
        setFio(newfio);
        cout << "������ ������� ��������" << endl;
        break;
    case 4:
        cout << "������� ����� ��������� �����: " << endl;
        newcost = check_input();
        setCost(newcost);
        cout << "������ ������� ��������" << endl;
        break;
    case 5:
        cout << "������� ������ �������������" << endl;
        getline(cin, newproducer);
        set_producer(newproducer);
        cout << "������ ������� ��������" << endl;
        break;
    case 6:
        cout << "������� ����� �������: " << endl;
        getline(cin, newdefects);
        set_defects(newdefects);
        cout << "������ ������� ��������" << endl;
        break;
    case 0:
        cout << "����� �� ��������������" << endl;
        break;
    default:
        cout << "�������� �����. ���������� �����" << endl;
        break;
    }
}

void Brass::save_to_file(ostream& out) {
    out << "Brass\n";
    out << name << '\n' << fio << '\n' << producer << '\n' << defects << '\n' << count << '\n' << cost << '\n';
}

void Brass::load_from_file(istream& in) {
    getline(in, name);
    getline(in, fio);
    getline(in, producer);
    getline(in, defects);
    in >> count;
    in >> cost;
}