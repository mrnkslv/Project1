/*#include <iostream>
using namespace std;

struct fraction {
	int integer;
	int fract;
};

fraction sum(fraction f1, fraction f2) {
	int div = 1;
	fraction c;
	for (int i = 1; i < ((f1.integer * f2.fract) + (f1.fract * f2.integer)); i++) {//looking for a divisor
		if ((((f1.integer * f2.fract) + (f1.fract * f2.integer)) % i == 0) && ((f1.fract * f2.fract) % i == 0)) {
			div = i;
		}
	}
	c.integer = ((f1.integer * f2.fract) + (f1.fract * f2.integer)) / div;
	c.fract = (f1.fract * f2.fract) / div;
	return c;
}

fraction fsub(fraction f1, fraction f2) {
	int div = 1;
	fraction c;
	for (int i = 1; i < ((f1.integer * f2.fract) - (f1.fract * f2.integer)); i++) {//looking for a divisor
		if ((((f1.integer * f2.fract) - (f1.fract * f2.integer)) % i == 0) && ((f1.fract * f2.fract) % i == 0)) {
			div = i;
		}
	}
	c.integer = ((f1.integer * f2.fract) - (f1.fract * f2.integer)) / div;
	c.fract = (f1.fract * f2.fract) / div;
	return c;
}

fraction fmul(fraction f1, fraction f2) {
	int div = 1;
	fraction c;
	for (int i = 1; i < (f1.integer * f2.integer); i++) {//looking for a divisor
		if (((f1.integer * f2.integer) % i == 0) && ((f1.fract * f2.fract) % i == 0)) {
			div = i;
		}
	}
	c.integer = (f1.integer * f2.integer) / div;
	c.fract = (f1.fract * f2.fract) / div;
	return c;
}

fraction fdiv(fraction f1, fraction f2) {
	int div = 1;
	fraction c;
	for (int i = 1; i < (f1.integer * f2.fract); i++) {//looking for a divisor
		if (((f1.integer * f2.fract) % i == 0) && ((f1.fract * f2.integer) % i == 0)) {
			div = i;
		}
	}
	c.integer = (f1.integer * f2.fract) / div;
	c.fract = (f1.fract * f2.integer) / div;
	return c;
}

int main() {
	setlocale(LC_ALL, "Rus");
	char ch = 'a';
	fraction f1, f2;
	char dummychar;
	do {
		cout << "Введите первую дробь: ";
		cin >> f1.integer >> dummychar >> f1.fract; // dummy character - /
		cout << "Введите знак операции: ";
		cin >> ch;
		cout << "Введите вторую дробь: ";
		cin >> f2.integer >> dummychar >> f2.fract;
	
		if (ch == '+') {
			fraction c = sum(f1, f2);
			cout << "Результат сложения: " << c.integer << dummychar << c.fract;
		}
		if (ch == '-') {
			fraction c = fsub(f1, f2);
			cout << "Результат вычитания: " << c.integer << dummychar << c.fract;
		}
		if (ch == '*') {
			fraction c = fmul(f1, f2);
			cout << "Результат умножения: " << c.integer << dummychar << c.fract;
		}
		if (ch == '/') {
			fraction c = fdiv(f1, f2);
			cout << "Результат деления: " << c.integer << dummychar << c.fract;
		}
		cout <<endl<< "Еще раз? (n- нет) :";
		cin >> dummychar;
	} while (dummychar != 'n');
	return 0;
}*/
