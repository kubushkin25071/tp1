#include "string.h"


// конструктор без параметров
String::String() : Orchestra("none", 0, "none", 0), producer(""), description("") {
    cout << "Вызван конструктор без параметров для String класса\n"; }

// конструктор с параметрами
String::String(const string& producer, const string& description, const string& name, const int& count, const string& fio, const int& cost):
    Orchestra(name, count, fio, cost), producer(producer), description(description) {
    cout << "Вызван конструктор с параметрами для String класса\n";
}

// конструктор копирования
String::String(const String& scr) : Orchestra(scr.name, scr.count, scr.fio, scr.cost), producer(scr.producer), description(scr.description)  {
    cout << "Вызван конструктор копирования для String класса\n";
}

//деструктор
String::~String() { cout << "Вызван деструктор  для String класса\n"; }

// установка производителя
void String::set_producer(string producer) {
    this->producer = producer;
}

// получение производителя
string String::get_producer() {
    return this->producer;
}

// установка краткого описания
void String::set_description(string description) {
    this->description = description;
}

// получение описания
string String::get_description() {
    return this->description;
}

// вывод на экран
void String::display() {
    cout << "Название инструмента: " << this->name << endl;
    cout << "Количество: " << this->count << endl;
    cout << "Владелец: " << this->fio << endl;
    cout << "Стоимость штуки: " << this->cost << endl;
    cout << "Производитель: " << this->producer << endl;
    cout << "Краткое описание: " << this->description << endl;
}

// поменять название
void String::change_info() {
    string newproducer, newdescription, newname, newfio;
    int newcost, newcount, choice;

    cout << "Выберите информацию для изменения:" << endl;
    cout << "1 - Название" << endl;
    cout << "2 - Колличество" << endl;
    cout << "3 - Владелец" << endl;
    cout << "4 - Стоимость штуки" << endl;
    cout << "5 - Производитель" << endl;
    cout << "6 - Краткое описание" << endl;
    cout << "0 - Выход" << endl;
    choice = check_input();

    switch (choice) {
    case 1:
        cout << "Введите новое название: " << endl;
        getline(cin, newname);
        setName(newname);
        cout << "Данные успешно изменены" << endl;
        break;
    case 2:
        cout << "Введите новое кол-во: " << endl;
        newcount = check_input();
        setCount(newcount);
        cout << "Данные успешно изменены" << endl;
        break;
    case 3:
        cout << "Введите нового владельца: " << endl;
        getline(cin, newfio);
        setFio(newfio);
        cout << "Данные успешно изменены" << endl;
        break;
    case 4:
        cout << "Введите новую стоимость штуки: " << endl;
        newcost = check_input();
        setCost(newcost);
        cout << "Данные успешно изменены" << endl;
        break;
    case 5:
        cout << "Введите нового производителя" << endl;
        getline(cin, newproducer);
        set_producer(newproducer);
        cout << "Данные успешно изменены" << endl;
        break;
    case 6:
        cout << "Введите новое текстовое описание: " << endl;
        getline(cin, newdescription);
        set_description(newdescription);
        cout << "Данные успешно изменены" << endl;
        break;
    case 0:
        cout << "Выход из редактирования" << endl;
        break;
    default:
        cout << "Неверный выбор. Попробуйте снова" << endl;
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