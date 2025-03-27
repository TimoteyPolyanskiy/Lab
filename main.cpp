#include <iostream>

using namespace std;

int main() {

	int grn;
	int cop;
	cout << "Пакет молока 900г,19 грн,89 коп,3 шт" << endl;
	cout << "Батон Нарізний,13 грн,29 коп, 1 шт" << endl;
	grn = 19 * 3 + 13*1;
	cop = 89 * 3 + 29*1;
	while (cop >= 100) {
		cop = cop - 100;
		grn++;
	}
	cout <<"Фінальна сума без округлення: "<< grn << " грн " << cop<<"коп" << endl;
	int remainder = cop % 10;
	if (remainder < 5) {
		cop = cop - remainder;
	}
	else {
		cop = cop + (10 - remainder);
	}
	while (cop >= 100) {
		cop = cop - 100;
		grn++;
	}
	cout << "Фінальна сума з округленням: " << grn<< " грн " << cop<<" коп" << endl;

}