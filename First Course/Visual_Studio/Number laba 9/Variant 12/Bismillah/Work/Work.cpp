#include "stdafx.h"
#include <iostream> 
#include <locale> 


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(0, "");
	int const sizeA = 10;
	int const sizeB = 5;
	int const sizeC = sizeA + sizeB;

	int A[sizeA]{1,2,3,4,5,6,7,8,9,10};
	int B[sizeB]{11,12,13,14,15};
	int C[sizeC];
	int index = 0;
	for (int i = 0; i < sizeC;i++) {
		if (i < sizeA) {
			C[i] = A[i];
		}
		else if (i >= sizeA) {
			C[i] = B[(sizeB - 1) - index];
			index++;
		}

		cout << C[i] << endl;
	} 

	
	system("pause");
	return 0;
}