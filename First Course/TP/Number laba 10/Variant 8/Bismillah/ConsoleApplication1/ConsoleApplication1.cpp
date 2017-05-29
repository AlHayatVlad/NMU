// inshallah.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
	setlocale(0, "");
	char *suggestion = new char[11];
	int count = 0;
	char punctuation[] = ".,?:;!-";

	for (int i = 0; i < 10; i++) {
		cin >> suggestion[i];
		int j = 0;
		while (punctuation[j] != '\0') {
			if (suggestion[i] == punctuation[j])count++;
			j++;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << suggestion[i];
	}
	cout << endl << "count  punctuations: " << count;
		_getch();
		return 0;
}


