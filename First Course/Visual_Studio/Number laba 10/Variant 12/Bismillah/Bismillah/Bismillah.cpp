#include "stdafx.h" 
#include "stdio.h" 
#include "locale.h" 
#include "conio.h" 



int main()
{
	setlocale(0, "");

	int bezu = 0, su = 0;
	char slova[140];

	for (int i = 0; i < 140; i++) {
		slova[i] = getche();
		printf("\n");

		if (slova[i] == 'y')
			su++;

		if ((slova[i] == ' ' || slova[i] == '.' || slova[i] == ',') && su == 0)
			bezu++;

		if (slova[i] == ' ' && su == 1)
			su = 0;

		if (slova[i] == '.')break;
	}

	printf("Кол-во слов без 'у': %i", bezu);
	getch();
	return 0;
}