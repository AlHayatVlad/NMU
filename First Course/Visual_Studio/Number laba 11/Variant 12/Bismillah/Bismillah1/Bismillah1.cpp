// Bismillah.cpp: определяет точку входа для консольного приложения.
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
		cout << "Продукт №" << i + 1 << endl;
		cout << "Название принтера: ";
		cin >> printer[i].name;
		cout << "Производитель: ";
		cin >> printer[i].firm;
		cout << "Скорость печати: ";
		cin >> printer[i].speed;
		cout << "Размер буффера: ";
		cin >> printer[i].size_buffer;
		cout << "Высота: ";
		cin >> printer[i].gabarit.hight;
		cout << "Ширина: ";
		cin >> printer[i].gabarit.width;
		cout << "Длина: ";
		cin >> printer[i].gabarit.legth;
		cout << "Вес: ";
		cin >> printer[i].gabarit.weight;

		more_middle_speed += printer[i].speed;
	}
	more_middle_speed /= size;
	cout << endl << endl << endl;
	for (int i = 0; i < size; i++) {
		if (printer[i].speed > more_middle_speed) {
			cout << "Фирма: " << printer[i].name << endl;
			cout << "Производитель: " << printer[i].firm << endl;
			cout << "Скорость: " << printer[i].speed << endl;
			cout << "Размер буффера: " << printer[i].size_buffer << endl;

			cout << "Высота: " << printer[i].gabarit.hight << endl;
			cout << "Ширина: " << printer[i].gabarit.width << endl;
			cout << "Длинна: " << printer[i].gabarit.legth << endl;
			cout << "Вес: " << printer[i].gabarit.weight << endl;
		}
	}

	system("pause");
	return 0;
}

