#include "stdafx.h"
#include "iostream"
#include "locale.h"
using namespace std;

//������� ����� ������
int *input(int **mass,const int sizeI,  int sizeJ,char *name) {
	cout << "----- ���������� ������� " << name << " -----" << endl;
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

//������� ������������ ����� 
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

//������� ������ ������������� �����
void output(int *mass, const int sizeI,char *name) {
	cout << "----- ����� �����  ������� " << name << " -----" << endl;
	for (int i = 0; i < sizeI; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(0, "");
	//������� ��������
	const int sizeAI = 3, sizeAJ = 5;
	const int sizeBI = 5, sizeBJ = 2;

	//�������� ��������
	int **A = new int *[sizeAI];
	int **B = new int *[sizeBI];

	//���� ������ � �������
	*A = input(A, sizeAI, sizeAJ,"A");
	*B = input(B, sizeBI, sizeBJ,"B");

	//������� ��� ����� �����
	int *summA = new int[sizeAI];
	int *summB = new int[sizeBI];

	//��������� ����� �����
	summA = calculation(A, sizeAI, sizeAJ);
	summB = calculation(B, sizeBI, sizeBJ);

	//����� ����� �����
	output(summA, sizeAI,"A");
	output(summB, sizeBI,"B");
	
	//�������� ������
	delete[] A,B,summA,summB;

	system("pause");
	return 0;
}

