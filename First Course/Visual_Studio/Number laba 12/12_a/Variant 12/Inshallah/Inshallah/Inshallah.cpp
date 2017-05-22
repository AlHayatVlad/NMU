// Inshallah.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int input_colculation(int *M,int size,int *positive,int *negative) {

	
	cout << "ввод массива:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> M[i];
		if (M[i] < 0) {
			*negative += M[i];
		} else *positive += M[i];
	}
	return abs(*positive) - abs(*negative);
}

void out(int *M, int size,int result,int positive,int negative) {
	for (int i = 0; i < size; i++) {
		cout << M[i] << " ";
	}
	cout << "Cумма позитивных: " << positive << endl << "Сумма негативных:" << negative << endl;
	cout << "Разница между абсолютным значением позитивных и негативных элементов:" << result << endl << endl;
}

int main()
{
	setlocale(0, "");
	int *M1 = new int[3];
	int *M2 = new int[4];
	int *M3 = new int[5];

	int positiveM1 = 0, negativeM1 = 0;
	int positiveM2 = 0, negativeM2 = 0;
	int positiveM3 = 0, negativeM3 = 0;
	
	int resultM1 = input_colculation(M1, sizeof(resultM1), &positiveM1, &negativeM1);
	int resultM2 = input_colculation(M2, sizeof(resultM2), &positiveM2, &negativeM2);
	int resultM3 = input_colculation(M3, sizeof(resultM3), &positiveM3, &negativeM3);

	out(M1, sizeof(resultM1), resultM1,positiveM1, negativeM1);
	out(M2, sizeof(resultM2), resultM2,positiveM2, negativeM2);
	out(M3, sizeof(resultM3), resultM3,positiveM3, negativeM3);

	system("pause");
    return 0;
}

