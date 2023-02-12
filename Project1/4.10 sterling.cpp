/*#include <iostream>
using namespace std;

struct sterling {
	int pounds;
	int shillings;
	int pence;
};

int main() {
	setlocale(LC_ALL, "Rus");
	double newform;
	char ch;
	cout << "Введите сумму в новых десятичных фунтах: ";
	cin >>ch>> newform;
	sterling sum;
	sum.pounds = newform ;
	sum.shillings = (newform*240 - sum.pounds*240) / 12;
	sum.pence = newform*240 - sum.pounds*240  - sum.shillings * 12;
	cout << " фунтов: " << sum.pounds << endl << "шиллингов: " << sum.shillings << endl << "пенсов: " << sum.pence << endl;
	//cout << "Десятичных фунтов: J" << ((funts * 20 * 12) + (shilling * 12) + penses) / (20 * 12);
	return 0;
}*/