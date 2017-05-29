// Inshallah.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void input(int *M, int sizeI) {
	cout << "���� ����� � ������:\n";
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
	//�-�� ����� ��� ��������
	int sizeA = 3,sizeB = 4,sizeC = 5;

	//�������� ��������
	int *A = new int[sizeA];
	int *B = new int[sizeB];
	int *C = new int[sizeC];

	//���������� 
	input(A, sizeA);
	input(B, sizeB);
	input(C, sizeC);

	//����� ����������� �������� 
	int maxA = maximum(A, sizeA);
	int maxB = maximum(B, sizeB);
	int maxC = maximum(C, sizeC);

	//������ ���� �� ������������ �������
	replacement(A, sizeA, maxA);
	replacement(B, sizeB, maxB);
	replacement(C, sizeC, maxC);

	//����� ��������
	out(A, sizeA);
	out(B, sizeB);
	out(C, sizeC);

	//������������ ������
	delete[] A, B, C;
	system("pause");
    return 0;
}

