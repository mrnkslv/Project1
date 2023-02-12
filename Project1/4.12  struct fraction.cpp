/*#include <iostream>
using namespace std;
struct fraction {
	int integer;
	int fract;
};
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
		int div = 1;
		switch (ch) {
		case'+':
			for (int i = 1; i < ((f1.integer * f2.fract) + (f1.fract * f2.integer)); i++) {//looking for a divisor
				if ((((f1.integer * f2.fract) + (f1.fract * f2.integer)) % i == 0) && ((f1.fract * f2.fract) % i == 0)) {
					div = i;
				}
			}
			cout << "Результат сложения: " << ((f1.integer * f2.fract) + (f1.fract * f2.integer)) / div 
				<< dummychar << (f1.fract * f2.fract) / div;
			break;
		case'-':
			for (int i = 1; i < ((f1.integer * f2.fract) - (f1.fract * f2.integer)); i++) {//looking for a divisor
				if ((((f1.integer * f2.fract) - (f1.fract * f2.integer)) % i == 0) && ((f1.fract * f2.fract) % i == 0)) {
					div = i;
				}
			}
			cout << "Результат вычитания: " << ((f1.integer * f2.fract) - (f1.fract * f2.integer)) / div
				<< dummychar << (f1.fract * f2.fract) / div;
			break;
		case'*':
			for (int i = 1; i < (f1.integer * f2.integer); i++) {//looking for a divisor
				if (((f1.integer * f2.integer) % i == 0) && ((f1.fract * f2.fract) % i == 0)) {
					div = i;
				}
			}
			cout << "Результат умножения: " << (f1.integer * f2.integer) / div << dummychar << (f1.fract * f2.fract) / div;
			break;
		case'/':
			for (int i = 1; i < (f1.integer * f2.fract); i++) {//looking for a divisor
				if (((f1.integer * f2.fract) % i == 0) && ((f1.fract * f2.integer) % i == 0)) {
					div = i;
				}
			}
			cout << "Результат деления: " << (f1.integer * f2.fract) / div << dummychar << (f1.fract * f2.integer) / div;
			break;
		}
		cout <<endl<< "Еще раз? (n- нет) :";
		cin >> dummychar;
	} while (dummychar != 'n');
	return 0;
}
*/