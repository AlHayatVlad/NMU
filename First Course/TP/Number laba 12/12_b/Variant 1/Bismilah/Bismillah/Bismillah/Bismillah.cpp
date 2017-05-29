#include "stdafx.h"
#include "stdio.h"
#include "locale.h"
#include "conio.h"

void input(int **M, int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf_s("%d", &M[i][j]);
}

int maximum(int **M, int m, int n)
{
	int max = M[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				if (M[i][j] > max)
					max = M[i][j];
			}
		}
	return max;
}

int minimum(int **M, int m, int n)
{
	int min = M[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				if (M[i][j] < min)
					min = M[i][j];
			}
		}
	return min;
}

void outmatrix(char matrix, int **M, int m, int n)
{
	printf("матрица : %c", matrix);
	for (int i = 0; i < m; i++)
	{
		printf("\n");
		for (int j = 0; j < n; j++)
		{
			printf("%d %s", M[i][j], " ");
		}
	}
	printf("\n");
}

int main()
{
	setlocale(0, "");
	int m, n, p, q, max1 = 0, min1 = 0, max2 = 0, min2 = 0;
	printf("введите размер массива 1: ");
	scanf_s("%d %d", &m, &n);

	int **M1 = new int *[n];
	for (int i = 0; i < n; i++)
	{
		M1[i] = new int[m];
	}
	printf("введите размер массива 2: ");
	scanf_s("%d %d", &p, &q);
	int **M2 = new int *[p];
	for (int i = 0; i < p; i++)
	{
		M2[i] = new int[q];
	}
	printf("введите массив 1: ");
	input(M1, m, n);
	printf("введите массив 2: ");
	input(M2, p, q);

	max1 = maximum(M1, m, n);
	min1 = minimum(M1, m, n);

	outmatrix('A', *&M1, m, n);
	outmatrix('B', *&M2, p, q);


	printf("Максимальный элемент главной диагонали матрицы 1: %d\n", max1);
	printf("Минимальный элемент главной диагонали матрицы 1: %d\n", min1);

	max2 = maximum(M2, p, q);
	min2 = minimum(M2, p, q);

	printf("Максимальный элемент главной диагонали матрицы 2: %d\n", max2);
	printf("Минимальный элемент главной диагонали матрицы 2: %d\n", min2);

	delete[] M1;
	delete[] M2;
	_getch();
	return 0;
}
