
#include "keeper.h"

int main(){
	char c = ' ';
	setlocale(LC_ALL, "Russian");
	system("cls");
	while (true){
		cout << "������ ������ - 1" << endl;
		cout << "����� - 0" << endl;
		cin >> c;
		if (c == '1') system("cls");// ��� ��������� ����
		else if (c == '0')	break;
		else cout << "����� ������������ ������" << endl;
	}
	
	return 0;
}
