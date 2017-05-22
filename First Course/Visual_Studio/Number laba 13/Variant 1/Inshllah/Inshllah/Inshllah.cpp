#include "stdafx.h" 
#include "stdio.h" 
#include "conio.h" 
#include "locale.h" 

int main()
{
	setlocale(0, "");
	int composition = 1;
	int summa = 0;
	const int size = 10;
	int *M = new int[size];
	FILE *input = fopen("input.txt", "r");;
	FILE *output = fopen("output.txt", "w");;


	for (int i = 0; i < size; i++)
	{
		fscanf(input, "%d\n", &M[i]);
		if (M[i] % 2 == 0) {
			composition *= M[i];
		}
		else if (M[i] % 2 != 0) {
			summa +=  M[i];
		}
		fprintf(output, "%d\n", M[i]);
	}
	printf("Произведение четных: %d\nСумма нечетных: %d\n", composition, summa);
	fclose(input);
	fclose(output);

	_getch();
	return 0;
}