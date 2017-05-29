// Inshallah.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void input(int *M, int sizeI) {
	cout << "Ввод чисел в массив:\n";
	for (int i = 0; i < sizeI; i++) {
		cin >> M[i];
	}
}

int maximum(int *M, int sizeI) {
	int maximum = M[0];
	for (int i = 1; i < sizeI; i++) {
		if (maximum < M[i]) {
			maximum = M[i];
		}
	}
	return maximum;
}

void replacement(int *M,int sizeI,int maximum) {
	
	for (int i = 0; i < sizeI; i++) {
		if (M[i] == 0) M[i] = maximum;
	}
}

void out(int *M, int sizeI) {
	for (int i = 0; i < sizeI; i++)
	cout << M[i] << " ";
	cout << endl;
	
}

int main()
{
	setlocale(0, "");
	//К-во строк для массивов
	int sizeA = 3,sizeB = 4,sizeC = 5;

	//Создание массивов
	int *A = new int[sizeA];
	int *B = new int[sizeB];
	int *C = new int[sizeC];

	//Заполнение 
	input(A, sizeA);
	input(B, sizeB);
	input(C, sizeC);

	//Поиск наибольшего элемента 
	int maxA = maximum(A, sizeA);
	int maxB = maximum(B, sizeB);
	int maxC = maximum(C, sizeC);

	//Замена нуля на максимальный элемент
	replacement(A, sizeA, maxA);
	replacement(B, sizeB, maxB);
	replacement(C, sizeC, maxC);

	//Вывод массивов
	out(A, sizeA);
	out(B, sizeB);
	out(C, sizeC);

	//Освобождение памяти
	delete[] A, B, C;
	system("pause");
    return 0;
}

