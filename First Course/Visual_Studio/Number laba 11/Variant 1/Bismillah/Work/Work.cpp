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
	cout << "---------number product ╧: " << index << endl;
	cout << "Name product: ";
	cin >> mass->name;
	cout << "price product: ";
	cin >> mass->cost;
	cout << "firm product: ";
	cin >> mass->origin_country;
	cout << "realese product: ";
	cin >> mass->dedline;
	cout << "count be product: ";
	cin >> mass->count;
	cout << endl << endl;
}
void output(product *mass, int index) {
	if ((2017 - mass->dedline) < 1) {
		cout << "---------опндсйр он яверс: " << index << endl;
		cout << "name product: " << mass->name << endl;
		cout << "count product: " << mass->cost << endl;
		cout << "firm product: " << mass->origin_country << endl;
		cout << "realese product: " << mass->dedline << endl;
		cout << "count  be product: " << mass->count << endl << endl;
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