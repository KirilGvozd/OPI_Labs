#include <iostream>
#include "Header.h"
using namespace std;
void Difference_Latin() {
	char latin_uppercase;
	char latin_lowercase;
	cout << "������� ��������� ��������� �����: \n"; cin >> latin_uppercase;
	cout << "������� �������� ��������� �����: \n"; cin >> latin_lowercase;
	cout << "������� �������� �����: " << int(latin_lowercase) - int(latin_uppercase) << endl;
}