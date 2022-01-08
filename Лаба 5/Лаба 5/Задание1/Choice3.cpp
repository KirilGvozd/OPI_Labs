#include <iostream>
#include "Header.h"
using namespace std;
void Code_Of_Symbol() {
	char symbol;
	cout << "Введите любой символ: "; cin >> symbol;
	cout << "Код введённого вами символа: " << int(symbol) << endl;
}