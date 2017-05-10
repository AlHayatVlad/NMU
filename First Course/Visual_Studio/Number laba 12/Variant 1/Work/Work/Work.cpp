// Work.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

//���� 
int *input(int **mass, const int sizeI, const int sizeJ) {
	for (int i = 0; i < sizeI; i++) {
		mass[i] = new int[sizeJ];
		cout << endl;
		for (int j = 0; j < sizeJ; j++) {
		
			mass[i][j] = i + j;
			cout << mass[i][j] << " ";
		}
	}
	cout << endl;
	return *mass;
}

//����� ����. �������� 
int max_element(int **mass, const int sizeI, const int sizeJ) {
	int max = mass[0][0];
	int k = 0;
	for (int i = 0; i < sizeI; i++) {
		if ((sizeJ - k) >= 0) {
			if (max < mass[i][k]) {
				max = mass[i][k];
			}
			k++;
		}
	}
	cout << endl;
	return max;
}

//����� ���. �������� 
int min_element(int **mass, const int sizeI, const int sizeJ) {
	int min = mass[0][0];
	int k = 0;
	for (int i = 0; i < sizeI; i++) {
		if ((sizeJ - k) > 0) {
			if (min > mass[i][k]) {
				min = mass[i][k];
			}
			k++;
		}
	}
	cout << endl;
	return min;
}

int main()
{

	//������ ��� ��������
	const int sizeAI = 4, sizeAJ = 3;
	const int sizeBI = 5, sizeBJ = 5;

	//�������� ��������
	int **A = new int *[sizeAI];
	int **B = new int *[sizeBI];

	//�������� �������� 
	*A = input(A, sizeAI, sizeAJ);
	*B = input(B, sizeBI, sizeBJ);

	//����� max/min
	int maxA = max_element(A, sizeAI, sizeAJ);
	int minA = min_element(A, sizeAI, sizeAJ);

	int maxB = max_element(B, sizeBI, sizeBJ);
	int minB = min_element(B, sizeBI, sizeBJ);

	//����� max/min
	cout << maxA;
	cout << minA;

	cout << maxB;
	cout << minB;

	system("pause");
    return 0;
}

