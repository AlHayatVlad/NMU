#include "stdafx.h" 
#include "iostream" 
using namespace std;


typedef struct {
	char name[255];
	int cost;
	char origin_country[255];
	int dedline;
	int count;

} product;



void input(product *mass, int index) {
	cout << "---------������� �� �����: " << index << endl;
	cout << "�������� ��������: ";
	cin >> mass->name;
	cout << "��������� ������: ";
	cin >> mass->cost;
	cout << "������-������������� ������: ";
	cin >> mass->origin_country;
	cout << "�������� ���� ���������� ������: ";
	cin >> mass->dedline;
	cout << "���������� ���������� ������: ";
	cin >> mass->count;
	cout << endl << endl;
}
void output(product *mass, int index) {
	if ((2017 - mass->dedline) < 1) {
		cout << "---------������� �� �����: " << index << endl;
		cout << "�������� ��������: " << mass->name << endl;
		cout << "��������� ������: " << mass->cost << endl;
		cout << "������-������������� ������: " << mass->origin_country << endl;
		cout << "�������� ���� ���������� ������: " << mass->dedline << endl;
		cout << "���������� ���������� ������: " << mass->count << endl << endl;
	}
	

}
int main()
{
	setlocale(0, "");
	const int size = 3;
	product mass[size];
	for (int i = 0; i < size; i++) {
		input(&mass[i], i + 1);
	}
	for (int i = 0; i < size; i++) {
		output(&mass[i], i + 1);
	}
	system("pause");
	return 0;
}