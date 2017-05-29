#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#pragma warning(disable : 4996)

FILE *input = fopen("input.txt", "r");
FILE *output = fopen("output.txt", "w");

int maximum(int *M,int size) {
	int max = M[0];
	for (int i = 0; i < size; i++) {
		if (max < M[i]) max = M[i];
	}
	return max;
}

int *zamena(int *M,int size, int max) {
	for (int i = 0; i < size; i++) {
		if (M[i] == 0) M[i] = max;
	}
	return M;
}
void out(int *M,int size) {
	printf("Result:\n");
	for (int i = 0; i < size; i++) {
		printf("%d%s", M[i], " ");
		fprintf(output, "%d\n", M[i]);
	}
}

void main()
{
	const int size = 10;
	int M[size];
	for (int i = 0 ; i < size; i++) fscanf(input, "%d\n", &M[i]);
	out(zamena(M, size, maximum(M, size)),size);
	getch();
	
}

