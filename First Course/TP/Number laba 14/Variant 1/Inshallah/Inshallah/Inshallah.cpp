#include "stdafx.h"
#include <iostream>
#include "locale.h"
#define size 10
using namespace std;
class Steck {
	char stck[size];
	int tos = 0;
public:
	void init();
	void puch();
	void pop();
	void out_count();
	void out_to_index();
};


void Steck::init() {
	tos = 0;
}


void Steck::puch() {
	char letter;
	cout << "Ввод данных:" << endl;
	for (int i = 0; i <= size; i++) {
	
		cin >> letter;
		if (tos == size) {
			cout << "Стек заполнен" << endl;
			return;
		}
		stck[tos] = letter;
		tos++;
	}
	cout << endl;
}

void Steck::pop() {
	cout << "Вывод данных:" << endl;
	for (int i = 0; i < size; i++) {
		if (tos == 0) {
			cout << "Стек пуст" << endl;
			break;
		}
		tos--;
		cout << stck[tos] << endl;
	}
}
void Steck::out_to_index() {
	int index;
	cout << "Индекс числа: ";
	cin >> index;
	cout << "Содержание ячейки под индексом " << index << ": " << stck[index] << endl;
}
void Steck::out_count() {
	cout << "Количество символов в данный момент:" << tos << endl;
}

int main()
{
	setlocale(0, "");
	Steck steck1,steck2;

	steck1.out_count();

	steck1.init(); 
	steck1.puch(); 
	steck1.out_to_index(); 
	steck1.out_count();

	steck1.pop(); 

	steck1.out_count();

	steck2.init();
	steck2.puch();
	steck2.out_to_index();
	steck2.out_count();

	steck1.pop();

	steck1.out_count();
	system("pause");
	return 0;
}