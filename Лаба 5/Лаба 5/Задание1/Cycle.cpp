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
		cout << "������� �����: "; cin >> number;
		switch (number)
		{
		case 1:
			cout << "������� ��������� ��������� �����: \n"; cin >> uppercase;
			cout << "������� �������� ��������� �����: \n"; cin >> lowercase;
			cout << "������� �������� �����: " << int(lowercase) - int(uppercase) << endl;
			break;
		case 2:
			cout << "������� ��������� ������� �����: \n"; cin >> uppercase;
			cout << "������� �������� ������� �����: \n"; cin >> lowercase;
			cout << "������� �������� �����: " << int(uppercase) - int(lowercase) << endl;
			break;
		case 3:
			cout << "������� ����� ������: "; cin >> symbol;
			cout << "��� ��������� ���� �������: " << int(symbol) << endl;
			break;
		case 4:
			cout << "�� ��������!" << endl;
			break;
		default:
			cout << "��� ������ ��������!!!" << endl;
			break;
		}
			cout << "���� ������ �����, ������� 0, ���� ������ ���������� ������� 1: "; cin >> exit_number;
			if (exit_number == 0) {
				break;
			}
			if (exit_number == 1) {
				continue;
			}
	}
}