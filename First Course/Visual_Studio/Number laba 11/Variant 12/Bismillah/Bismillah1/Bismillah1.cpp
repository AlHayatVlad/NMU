// Bismillah.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


struct gabarits {
	int hight;
	int width;
	int legth;
	int weight;
};
struct printer {
	char name[20];
	char firm[20];
	int speed;
	int size_buffer;

	gabarits gabarit;

};


int main()
{
	setlocale(0, "");
	const int size = 3;
	printer printer[size];
	int more_middle_speed = 0;
	for (int i = 0; i < size; i++) {
		cout << "������� �" << i + 1 << endl;
		cout << "�������� ��������: ";
		cin >> printer[i].name;
		cout << "�������������: ";
		cin >> printer[i].firm;
		cout << "�������� ������: ";
		cin >> printer[i].speed;
		cout << "������ �������: ";
		cin >> printer[i].size_buffer;
		cout << "������: ";
		cin >> printer[i].gabarit.hight;
		cout << "������: ";
		cin >> printer[i].gabarit.width;
		cout << "�����: ";
		cin >> printer[i].gabarit.legth;
		cout << "���: ";
		cin >> printer[i].gabarit.weight;

		more_middle_speed += printer[i].speed;
	}
	more_middle_speed /= size;
	cout << endl << endl << endl;
	for (int i = 0; i < size; i++) {
		if (printer[i].speed > more_middle_speed) {
			cout << "�����: " << printer[i].name << endl;
			cout << "�������������: " << printer[i].firm << endl;
			cout << "��������: " << printer[i].speed << endl;
			cout << "������ �������: " << printer[i].size_buffer << endl;

			cout << "������: " << printer[i].gabarit.hight << endl;
			cout << "������: " << printer[i].gabarit.width << endl;
			cout << "������: " << printer[i].gabarit.legth << endl;
			cout << "���: " << printer[i].gabarit.weight << endl;
		}
	}

	system("pause");
	return 0;
}

