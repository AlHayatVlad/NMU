#include "stdafx.h"
#include "iostream"
#include "string"
#include "locale.h"
#include "conio.h"
using namespace std;

struct book {
	string author;
	char name[20];
	char publish[30];
	int year;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int size;
	printf("������� ���� ������� � ����? ");
	scanf_s("%d", &size);

	book *b = new book[size];

	int i = 0;
	while (i < size) {

		printf("������� ������: ");
		cin >> b[i].author;


		printf("������� �������� �����: ");
		cin >> b[i].name;

		printf("������� ������������: ");
		cin >> b[i].publish;

		printf("������� ���: ");
		cin >> b[i].year;


		i++;
	}

	string *author = new string;
	printf("����� ����� ����� ? \n");
	cin >> *author;
	for (int i = 0; i < size; i++) {
		if ((b[i].year < 1990) && (b[i].author == *author)) {
			printf("����� : %s\n", b[i].author);
			printf("�������� ����� : %s\n", b[i].name);
			printf("������������ : %s\n", b[i].publish);
			printf("��� ������� : %d\n", b[i].year);
		}
	}

	delete author;
	delete[] b;
	_getch();
	return 0;
}