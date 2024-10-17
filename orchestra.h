#pragma once
#include <string>
#include <iostream> // ввод-вывод на экран
using namespace std; // для вектора, строк и ввода-вывода

/* Базовый класс Оркестр*/

class Orchestra { 
public:
	Orchestra(){}; // конструктор без параметров
	virtual ~Orchestra() {}; // виртуальный деструткор
};
