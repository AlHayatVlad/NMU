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
	printf("\n������� ���������� �����:");
	scanf("%d", &n);
	country *strana = new country[n];
	float plotnost[1], density[1], density2[1];
	for (int i = 0; i<1; i++) {
		printf("\n������� ��������� ������:");
		scanf("%f", &density[i]);
	}
	for (int i = 0; i<1; i++) {
		printf("\n������� �������� ������:");
		scanf("%s", &strana[i].pais);
		printf("������� ������� ������:");
		scanf("%d", &strana[i].area);
		printf("������� ���������� ��������� ������:");
		scanf("%d", &strana[i].gente);
		printf("������� ����������� ���� ������:");
		scanf("%s", &strana[i].lengua);
		printf("������� ������ ������:");
		scanf("%s", &strana[i].dinero);
		plotnost[i] = strana[i].gente / strana[i].area;
		printf("���������:%.2f���/��^2", plotnost[i]);


	}
	for (int i = 0; i<1; i++) {
		if (plotnost[i]>density[i])
			printf("\n������ �����:%s", strana[i].pais);
		else printf("\n����� ������ � ������ ���");
	}
	delete[] strana;
	getch();
	return 0;
}