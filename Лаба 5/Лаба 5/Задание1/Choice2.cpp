#include <iostream>
#include "Header.h"
using namespace std;
void Difference_Rus() {
	char rus_uppercase;
	char rus_lowercase;
	cout << "Введите заглавную букву кириллицы: \n"; cin >> rus_uppercase;
	cout << "Введите ту же букву, но строчную: \n"; cin >> rus_lowercase;
	cout << "Разница между кодами: " << int(rus_lowercase) - int(rus_uppercase) << endl;
}
