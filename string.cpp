#include "string.h"


// ����������� ��� ����������
String::String() : Orchestra("none", 0, "none", 0), producer(""), description("") {
    cout << "������ ����������� ��� ���������� ��� String ������\n"; }

// ����������� � �����������
String::String(const string& producer, const string& description, const string& name, const int& count, const string& fio, const int& cost):
    Orchestra(name, count, fio, cost), producer(producer), description(description) {
    cout << "������ ����������� � ����������� ��� String ������\n";
}

// ����������� �����������
String::String(const String& scr) : Orchestra(scr.name, scr.count, scr.fio, scr.cost), producer(scr.producer), description(scr.description)  {
    cout << "������ ����������� ����������� ��� String ������\n";
}

//����������
String::~String() { cout << "������ ����������  ��� String ������\n"; }

// ��������� �������������
void String::set_producer(string producer) {
    this->producer = producer;
}

// ��������� �������������
string String::get_producer() {
    return this->producer;
}

// ��������� �������� ��������
void String::set_description(string description) {
    this->description = description;
}

// ��������� ��������
string String::get_description() {
    return this->description;
}

// ����� �� �����
void String::display() {
    cout << "�������� �����������: " << this->name << endl;
    cout << "����������: " << this->count << endl;
    cout << "��������: " << this->fio << endl;
    cout << "��������� �����: " << this->cost << endl;
    cout << "�������������: " << this->producer << endl;
    cout << "������� ��������: " << this->description << endl;
}

// �������� ��������
void String::change_info() {
    string newproducer, newdescription, newname, newfio;
    int newcost, newcount, choice;

    cout << "�������� ���������� ��� ���������:" << endl;
    cout << "1 - ��������" << endl;
    cout << "2 - �����������" << endl;
    cout << "3 - ��������" << endl;
    cout << "4 - ��������� �����" << endl;
    cout << "5 - �������������" << endl;
    cout << "6 - ������� ��������" << endl;
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
        cout << "������� ����� ��������� ��������: " << endl;
        getline(cin, newdescription);
        set_description(newdescription);
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

void String::save_to_file(ostream& out) {
    out << "String\n";
    out << name << '\n' << fio << '\n' << producer << '\n' << description << '\n' << count << '\n' << cost << '\n';
}

void String::load_from_file(istream& in) {
    getline(in, name);
    getline(in, fio);
    getline(in, producer);
    getline(in, description);
    in >> count;
    in >> cost;
}