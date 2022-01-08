#include <iostream>
#include "Header.h"
using namespace std;
void Difference_Rus() {
	char rus_uppercase;
	char rus_lowercase;
	cout << "Введите заглавную русскую букву: \n"; cin >> rus_uppercase;
	cout << "Введите строчную русскую букву: \n"; cin >> rus_lowercase;
	cout << "Разница значений кодов: " << int(rus_lowercase) - int(rus_uppercase) << endl;
}