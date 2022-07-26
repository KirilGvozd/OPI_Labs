#include <iostream>
#include "Header.h"
using namespace std;

//Мои комментарии удалять перед тем, как сдавать
//Эта функция высчитывает разницу между кодами заглавной и строчных букв 
void Difference_Latin() {
	char latin_uppercase;
	char latin_lowercase;
	cout << "Введите заглавную букву латинского алфавита: \n"; cin >> latin_uppercase;
	cout << "Введите ту же букву, но теперь строчную: \n"; cin >> latin_lowercase;
	cout << "Разница между кодами: " << int(latin_lowercase) - int(latin_uppercase) << endl;
}
