#include "drum.h"

// ����������� ��� ����������
Drum::Drum(){
    cout << "������ ����������� ��� ���������� ��� Drum ������\n";
}

// ����������� � �����������
Drum::Drum(const string& type_d, const string& name, const int& count, const string& fio, const int& cost) :
    Orchestra(name, count, fio, cost), type_d(type_d) {
    cout << "������ ����������� � ����������� ��� Drum ������\n";
}

// ����������� �����������
Drum::Drum(const Drum& scr) : Orchestra(scr.name, scr.count, scr.fio, scr.cost), type_d(scr.type_d) {
    cout << "������ ����������� ����������� ��� Drum ������\n";
}

//����������
Drum::~Drum() { cout << "������ ����������  ��� Drum ������\n"; }

// ��������� ���� ��������
void Drum::set_type_d(string type_d) {
    this->type_d = type_d;
}

// ��������� ���� ��������
string Drum::get_type_d() {
    return this->type_d;
}

// ����� �� �����
void Drum::display() {
    cout << "�������� �����������: " << this->name << endl;
    cout << "����������: " << this->count << endl;
    cout << "��������: " << this->fio << endl;
    cout << "��������� �����: " << this->cost << endl;
    cout << "��� ��������: " << this->type_d << endl;
}

// �������� ��������
void Drum::change_info() {
    string newtype_d, newname, newfio;
    int newcost, newcount, choice;

    cout << "�������� ���������� ��� ���������:" << endl;
    cout << "1 - ��������" << endl;
    cout << "2 - �����������" << endl;
    cout << "3 - ��������" << endl;
    cout << "4 - ��������� �����" << endl;
    cout << "5 - ��� ��������" << endl;
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
        cout << "������� ���sq n�� ��������" << endl;
        getline(cin, newtype_d);
        set_type_d(newtype_d);
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

void Drum::save_to_file(ostream& out) {
    out << "Drum\n";
    out << name << '\n' << fio << '\n' << type_d << '\n' << count << '\n' << cost << '\n';
}

void Drum::load_from_file(istream& in) {
    getline(in, name);
    getline(in, fio);
    getline(in, type_d);
    in >> count;
    in >> cost;
}