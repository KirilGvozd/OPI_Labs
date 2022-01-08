#include <iostream>
#include "Header.h"
using namespace std;
void Difference_Latin() {
	char latin_uppercase;
	char latin_lowercase;
	cout << "Введите заглавную латинскую букву: \n"; cin >> latin_uppercase;
	cout << "Введите строчную латинскую букву: \n"; cin >> latin_lowercase;
	cout << "Разница значений кодов: " << int(latin_lowercase) - int(latin_uppercase) << endl;
}