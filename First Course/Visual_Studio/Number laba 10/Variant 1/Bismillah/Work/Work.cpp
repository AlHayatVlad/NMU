// Inshallah.cpp: ���������� ����� ����� ��� ����������� ����������.
#include "stdafx.h"
#include "iostream"
#include "string.h"
using namespace std;
void main()
{
	setlocale(0, "");
	char *letter = new char[79];
	int index = 0;
	while (index  < 79 && letter[index - 1] != '.') {
		cin >> letter[index];
		index++;
	}
	cout  << "Count simvols:" << index << endl;
	delete[] letter;
	system("pause");
}

