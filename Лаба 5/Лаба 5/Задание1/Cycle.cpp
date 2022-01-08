#include <iostream>
#include "Header.h"
using namespace std;
void cycle() {
	char symbol;
	char lowercase;
	char uppercase;
	int number;
	int exit_number;
	for (;;) {
		cout << "Введите номер: "; cin >> number;
		switch (number)
		{
		case 1:
			cout << "Введите заглавную латинскую букву: \n"; cin >> uppercase;
			cout << "Введите строчную латинскую букву: \n"; cin >> lowercase;
			cout << "Разница значений кодов: " << int(lowercase) - int(uppercase) << endl;
			break;
		case 2:
			cout << "Введите заглавную русскую букву: \n"; cin >> uppercase;
			cout << "Введите строчную русскую букву: \n"; cin >> lowercase;
			cout << "Разница значений кодов: " << int(uppercase) - int(lowercase) << endl;
			break;
		case 3:
			cout << "Введите любой символ: "; cin >> symbol;
			cout << "Код введённого вами символа: " << int(symbol) << endl;
			break;
		case 4:
			cout << "До свидания!" << endl;
			break;
		default:
			cout << "Нет такого варианта!!!" << endl;
			break;
		}
			cout << "Если хотите выйти, нажмите 0, если хотите продолжить нажмите 1: "; cin >> exit_number;
			if (exit_number == 0) {
				break;
			}
			if (exit_number == 1) {
				continue;
			}
	}
}