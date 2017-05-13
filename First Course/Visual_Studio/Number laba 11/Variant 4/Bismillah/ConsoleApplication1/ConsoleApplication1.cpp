#include "stdafx.h"
#include "iostream"
#include "locale.h"
using namespace std;

//�������� ���������
typedef struct product {
	char name[255];
	int  calorie;
	char vitamins[7];
	int cost;
};


//����� ����� 
void input(struct product *f, int index) {
	cout << "---------- NUMBER PRODUCT(" << index << ") ---------- INPUT DATA" << endl;
	cout << "name product: ";
	cin >> f->name;
	cout << "count calories: ";
	cin >> f->calorie;
	cout << "vitamins: ";
	cin >> f->vitamins;
	cout << "price: ";
	cin >> f->cost;
	cout << endl;
	index++;
}

//����� ������
void output(struct product *f, int index, char *type_colories) {

	//�������� �� ��������
	int count = 0;
	for (int i = 0; i < strlen(f->vitamins); i++) {
		for (int j = 0; j < strlen(type_colories); j++) {
			if (f->vitamins[i] == type_colories[j]) {
				count++;
			}
		}
	}


	if (count != 0) {
		cout << "---------- NUMBER PRODUCT(" << index << ") ---------- INPUT DATA" << endl;
		cout << "name product: " << f->name << endl;
		cout << "count calories: " << f->calorie << endl;
		cout << "vitamins: " << f->vitamins << endl;
		cout << "price: " << f->cost << endl;
	}
	index++;
}

int main()
{
	setlocale(0, "");
	//������ ��������� 
	char *type_colories = "ABCEP";

	//������ ��� �������
	const int size = 3;

	//������ ���������
	product pr[size];

	//���� ������
	for (int i = 0; i < 3; i++) {
		input(&pr[i], i + 1);
	}
	//����� ������
	for (int i = 0; i < 3; i++) {
		output(&pr[i], i + 1, type_colories);
	}

	system("pause");
	return 0;
}
