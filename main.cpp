
#include "keeper.h"

int main(){
	char c = ' ';
	setlocale(LC_ALL, "Russian");
	system("cls");
	while (true){
		cout << "Начать работу - 1" << endl;
		cout << "Выйти - 0" << endl;
		cin >> c;
		if (c == '1') system("cls");// идёт остальное меню
		else if (c == '0')	break;
		else cout << "Введён некорректный символ" << endl;
	}
	
	return 0;
}
