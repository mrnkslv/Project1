/*#include <iostream>
using namespace std;

struct fraction {
	int integer;
	int fract;
};
int main() {
	setlocale(LC_ALL, "Rus");
	fraction f1;
	fraction f2;
	char dummychar;
	cout << "¬ведите первую дробь: ";
	cin >> f1.integer  >>dummychar>> f1.fract; // dummy character - /
	cout << "¬ведите вторую дробь: ";
	cin >> f2.integer >> dummychar>> f2.fract;
	int div = 1;
	for (int i = 1; i < ((f1.integer * f2.fract) + (f2.fract * f2.integer)); i++) {//looking for a divisor
		if ((((f1.integer * f2.fract) + (f2.fract * f2.integer)) %i == 0) && ((f1.fract * f2.fract)% i  == 0)) {
			div = i;
		}
	}
	cout<< "–езультат сложени€: " << ((f1.integer * f2.fract) + (f2.fract * f2.integer)) /div << dummychar << (f1.fract * f2.fract) /div;
		return 0;
}*/