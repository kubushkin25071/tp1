#include "brass.h"

// конструктор без параметров
Brass::Brass() : Orchestra("none", 0, "none", 0), producer(""), defects("") {
    cout << "Вызван конструктор без параметров для Brass класса\n";
}

// конструктор с параметрами
Brass::Brass(const string& producer, const string& defects, const string& name, const int& count, const string& fio, const int& cost) :
    Orchestra(name, count, fio, cost), producer(producer), defects(defects) {
    cout << "Вызван конструктор с параметрами для Brass класса\n";
}

// конструктор копирования
Brass::Brass(const Brass& scr) : Orchestra(scr.name, scr.count, scr.fio, scr.cost), producer(scr.producer), defects(scr.defects) {
    cout << "Вызван конструктор копирования для Brass класса\n";
}

//деструктор
Brass::~Brass() { cout << "Вызван деструктор  для Brass класса\n"; }

// установка производителя
void Brass::set_producer(string producer) {
    this->producer = producer;
}

// получение производителя
string Brass::get_producer() {
    return this->producer;
}

// установка краткого описания
void Brass::set_defects(string defects) {
    this->defects = defects;
}

// получение описания
string Brass::get_defects() {
    return this->defects;
}

// вывод на экран
void Brass::display() {
    cout << "Название инструмента: " << this->name << endl;
    cout << "Количество: " << this->count << endl;
    cout << "Владелец: " << this->fio << endl;
    cout << "Стоимость штуки: " << this->cost << endl;
    cout << "Производитель: " << this->producer << endl;
    cout << "Дефекты: " << this->defects << endl;
}

// поменять название
void Brass::change_info() {
    string newproducer, newdefects, newname, newfio;
    int newcost, newcount, choice;

    cout << "Выберите информацию для изменения:" << endl;
    cout << "1 - Название" << endl;
    cout << "2 - Колличество" << endl;
    cout << "3 - Владелец" << endl;
    cout << "4 - Стоимость штуки" << endl;
    cout << "5 - Производитель" << endl;
    cout << "6 - Дефекты" << endl;
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
        cout << "Введите новые дефекты: " << endl;
        getline(cin, newdefects);
        set_defects(newdefects);
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