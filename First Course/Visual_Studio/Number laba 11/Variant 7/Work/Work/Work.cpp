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
	printf("Сколько книг занести в базу? ");
	scanf_s("%d", &size);

	book *b = new book[size];

	int i = 0;
	while (i < size) {

		printf("Введите автора: ");
		cin >> b[i].author;


		printf("Введите название книги: ");
		cin >> b[i].name;

		printf("Введите издательство: ");
		cin >> b[i].publish;

		printf("Введите год: ");
		cin >> b[i].year;


		i++;
	}

	string *author = new string;
	printf("Какой автор нужен ? \n");
	cin >> *author;
	for (int i = 0; i < size; i++) {
		if ((b[i].year < 1990) && (b[i].author == *author)) {
			printf("Автор : %s\n", b[i].author);
			printf("Название книги : %s\n", b[i].name);
			printf("Издательство : %s\n", b[i].publish);
			printf("Год издания : %d\n", b[i].year);
		}
	}

	delete author;
	delete[] b;
	_getch();
	return 0;
}