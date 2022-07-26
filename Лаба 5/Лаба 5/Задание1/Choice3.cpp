#include <iostream>
#include "Header.h"
using namespace std;

//Эта функция показывает код символа в кодировке Windows-1251
void Code_Of_Symbol() {
	char symbol;
	cout << "Введите любой символ: "; cin >> symbol;
	cout << "Код введённого вами символа: " << int(symbol) << endl;
}
