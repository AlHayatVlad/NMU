#include <iostream.h>
#define size 10

class Steck {
	char stck[size];
	int tos;
	public:
		void init();
		void puch(char ch);
		char pop();
};
void Steck::init() {
	tos = 0;
}
void Steck::puch(char h) {
	if (tos == size) {
		cout << "Стек заполнен\n";
		return;
	}
	stck[tos] = h;
	toss++;
}

char Steck::pop() {
	if (tos == 0) {
		cout << "Стек пуст";
		return(0);
	}
	tos--;
	return stck[tos];
}