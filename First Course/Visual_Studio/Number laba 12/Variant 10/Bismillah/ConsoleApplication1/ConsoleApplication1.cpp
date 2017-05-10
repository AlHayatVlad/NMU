#include "stdafx.h"
#include "iostream"
#include "locale.h"
using namespace std;

//Функция ввода данных
int *input(int **mass,const int sizeI,  int sizeJ,char *name) {
	cout << "----- Содержимое массива " << name << " -----" << endl;
	for (int i = 0; i < sizeI; i++) {
		mass[i] = new int[sizeJ];
	}

	for (int i = 0; i < sizeI; i++) {
		cout << endl;
		for (int j = 0; j < sizeJ; j++) {
			mass[i][j] = i + j;
			cout << mass[i][j] << " ";
		}
	
	}
	cout << endl;
	return *mass;
}

//Функция суммирования строк 
int *calculation(int **mass, const int sizeI, int sizeJ) {
	
	int *summ = new int[sizeI];
	int k = 0;
	for (int i = 0; i < sizeI; i++) {
		k = 0;
		for (int j = 0; j < sizeJ; j++) {
			k += mass[i][j];
		}
		summ[i] = k;
	}
	cout << endl;
	return summ;
}

//Функция вывода суммированных строк
void output(int *mass, const int sizeI,char *name) {
	cout << "----- Сумма строк  массива " << name << " -----" << endl;
	for (int i = 0; i < sizeI; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(0, "");
	//Размеры массивов
	const int sizeAI = 3, sizeAJ = 5;
	const int sizeBI = 5, sizeBJ = 2;

	//Создание массивов
	int **A = new int *[sizeAI];
	int **B = new int *[sizeBI];

	//Ввод данных в массивы
	*A = input(A, sizeAI, sizeAJ,"A");
	*B = input(B, sizeBI, sizeBJ,"B");

	//Массивы для суммы строк
	int *summA = new int[sizeAI];
	int *summB = new int[sizeBI];

	//Вычисляем сумму строк
	summA = calculation(A, sizeAI, sizeAJ);
	summB = calculation(B, sizeBI, sizeBJ);

	//Вывод суммы строк
	output(summA, sizeAI,"A");
	output(summB, sizeBI,"B");
	
	//Очищение памяти
	delete[] A,B,summA,summB;

	system("pause");
	return 0;
}

