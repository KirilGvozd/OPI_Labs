#include <iostream>
#include "Header.h"
using namespace std;
void Difference_Rus() {
	char rus_uppercase;
	char rus_lowercase;
	cout << "������� ��������� ������� �����: \n"; cin >> rus_uppercase;
	cout << "������� �������� ������� �����: \n"; cin >> rus_lowercase;
	cout << "������� �������� �����: " << int(rus_lowercase) - int(rus_uppercase) << endl;
}