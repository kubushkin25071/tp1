#include "drum.h"

// конструктор без параметров
Drum::Drum(){
    cout << "Вызван конструктор без параметров для Drum класса\n";
}

// конструктор с параметрами
Drum::Drum(const string& type_d, const string& name, const int& count, const string& fio, const int& cost) :
    Orchestra(name, count, fio, cost), type_d(type_d) {
    cout << "Вызван конструктор с параметрами для Drum класса\n";
}

// конструктор копирования
Drum::Drum(const Drum& scr) : Orchestra(scr.name, scr.count, scr.fio, scr.cost), type_d(scr.type_d) {
    cout << "Вызван конструктор копирования для Drum класса\n";
}

//деструктор
Drum::~Drum() { cout << "Вызван деструктор  для Drum класса\n"; }

// установка типа барабана
void Drum::set_type_d(string type_d) {
    this->type_d = type_d;
}

// получение типа барабана
string Drum::get_type_d() {
    return this->type_d;
}

// вывод на экран
void Drum::display() {
    cout << "Название инструмента: " << this->name << endl;
    cout << "Количество: " << this->count << endl;
    cout << "Владелец: " << this->fio << endl;
    cout << "Стоимость штуки: " << this->cost << endl;
    cout << "Тип барабана: " << this->type_d << endl;
}

// поменять название
void Drum::change_info() {
    string newtype_d, newname, newfio;
    int newcost, newcount, choice;

    cout << "Выберите информацию для изменения:" << endl;
    cout << "1 - Название" << endl;
    cout << "2 - Колличество" << endl;
    cout << "3 - Владелец" << endl;
    cout << "4 - Стоимость штуки" << endl;
    cout << "5 - Тип барабана" << endl;
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
        cout << "Введите новsq nип барабана" << endl;
        getline(cin, newtype_d);
        set_type_d(newtype_d);
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