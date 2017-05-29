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
		cout << "Product №" << i + 1 << endl;
		cout << "Name printer: ";
		cin >> printer[i].name;
		cout << "Firm: ";
		cin >> printer[i].firm;
		cout << "Speed printer: ";
		cin >> printer[i].speed;
		cout << "Size buffer: ";
		cin >> printer[i].size_buffer;
		cout << "Height: ";
		cin >> printer[i].gabarit.hight;
		cout << "width: ";
		cin >> printer[i].gabarit.width;
		cout << "leght: ";
		cin >> printer[i].gabarit.legth;
		cout << "Weight: ";
		cin >> printer[i].gabarit.weight;

		more_middle_speed += printer[i].speed;
	}
	more_middle_speed /= size;
	cout << endl << endl << endl;
	for (int i = 0; i < size; i++) {
		if (printer[i].speed > more_middle_speed) {
			cout << "Name: " << printer[i].name << endl;
			cout << "Firm: " << printer[i].firm << endl;
			cout << "Speed: " << printer[i].speed << endl;
			cout << "Size buffer: " << printer[i].size_buffer << endl;

			cout << "Height: " << printer[i].gabarit.hight << endl;
			cout << "Width: " << printer[i].gabarit.width << endl;
			cout << "Leght: " << printer[i].gabarit.legth << endl;
			cout << "Weight: " << printer[i].gabarit.weight << endl;
		}
	}

	system("pause");
	return 0;
}

