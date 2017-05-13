#include "stdafx.h" 
#include "locale.h" 
#include "iostream" 
#include "math.h" 
#include"conio.h" 
#include "string.h" 

struct country
{
	int gente, area;
	char lengua[20], pais[20], dinero[15];
};

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0, "Russian");


	int n;
	printf("\nInput count country:");
	scanf("%d", &n);
	country *strana = new country[n];
	float plotnost[1], density[1], density2[1];
	for (int i = 0; i<1; i++) {
		printf("\nInput density country:");
		scanf("%f", &density[i]);
	}
	for (int i = 0; i<1; i++) {
		printf("\nInput name country:");
		scanf("%s", &strana[i].pais);
		printf("Input area country:");
		scanf("%d", &strana[i].area);
		printf("Input population:");
		scanf("%d", &strana[i].gente);
		printf("Input language:");
		scanf("%s", &strana[i].lengua);
		printf("Input currency:");
		scanf("%s", &strana[i].dinero);
		plotnost[i] = strana[i].gente / strana[i].area;
		printf("density:%.2fχελ/κμ^2", plotnost[i]);


	}
	for (int i = 0; i<1; i++) {
		if (plotnost[i]>density[i])
			printf("\nlist countrys:%s", strana[i].pais);
		else printf("\nThis country not it is list");
	}
	delete[] strana;
	getch();
	return 0;
}