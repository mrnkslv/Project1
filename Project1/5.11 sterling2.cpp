/*#include <iostream>
using namespace std;

struct sterling {
	int pounds;
	int shillings;
	int pence;
};
sterling get_value() {
	sterling a;
	cout << "¬ведите кол-во фунтов, шиллингов и пенсов через пробел: ";
	cin >> a.pounds >> a.shillings >> a.pence;
	return a;
}
sterling sum(sterling a, sterling b) {
	sterling res;
	res.pounds = a.pounds + b.pounds;
	res.shillings = a.shillings + b.shillings;
	if (res.shillings >= 20) {
		res.shillings -= 20;
		res.pounds++;
	}
	res.pence = a.pence + b.pence;
	if (res.pence >= 12) {
		res.pence -= 12;
		res.shillings++;
	}
	return res;
}

void display(sterling a) {
	cout << "–езультат сложени€: J" << a.pounds << "." << a.shillings << "." << a.pence;
}
int main() {
	setlocale(LC_ALL, "Rus");
	sterling a = get_value();
	sterling b = get_value();
	sterling result = sum(a, b);
	display(result);
	return 0;
}*/