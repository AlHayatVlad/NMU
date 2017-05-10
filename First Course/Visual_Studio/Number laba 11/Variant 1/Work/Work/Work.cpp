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
	cout << "---------ПРОДУКТ ПО СЧЕТУ: " << index << endl;
	cout << "Название продукта: ";
	cin >> mass->name;
	cout << "Стоимость товара: ";
	cin >> mass->cost;
	cout << "Страна-производитель товара: ";
	cin >> mass->origin_country;
	cout << "Конечный срок реализации товара: ";
	cin >> mass->dedline;
	cout << "Количество имеющегося товара: ";
	cin >> mass->count;
	cout << endl << endl;
}
void output(product *mass, int index) {
	if ((2017 - mass->dedline) < 1) {
		cout << "---------ПРОДУКТ ПО СЧЕТУ: " << index << endl;
		cout << "Название продукта: " << mass->name << endl;
		cout << "Стоимость товара: " << mass->cost << endl;
		cout << "Страна-производитель товара: " << mass->origin_country << endl;
		cout << "Конечный срок реализации товара: " << mass->dedline << endl;
		cout << "Количество имеющегося товара: " << mass->count << endl << endl;
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