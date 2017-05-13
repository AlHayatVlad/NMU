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
	printf("How moch books must input database? ");
	scanf_s("%d", &size);

	book *b = new book[size];

	int i = 0;
	while (i < size) {

		printf("Input author: ");
		cin >> b[i].author;


		printf("Input name book: ");
		cin >> b[i].name;

		printf("Input publish: ");
		cin >> b[i].publish;

		printf("Input year: ");
		cin >> b[i].year;


		i++;
	}

	string *author = new string;
	printf("What author must ? \n");
	cin >> *author;
	for (int i = 0; i < size; i++) {
		if ((b[i].year < 1990) && (b[i].author == *author)) {
			printf("Author : %s\n", b[i].author);
			printf("Name book : %s\n", b[i].name);
			printf("Publish : %s\n", b[i].publish);
			printf("Publish year : %d\n", b[i].year);
		}
	}

	delete author;
	delete[] b;
	_getch();
	return 0;
}