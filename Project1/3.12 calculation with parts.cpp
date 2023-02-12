/*#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	char ch = 'a';
	int a, b, c, d;
	char dummychar;
	do {
		cout << "Введите первую дробь: ";
		cin >> a >> dummychar >> b; // dummy character - /
		cout << "Введите знак операции: ";
		cin >> ch;
		cout << "Введите вторую дробь: ";
		cin >> c >> dummychar >> d;
		int div = 1;
		switch (ch) {
		case'+':
			for (int i = 1; i < ((a * d) + (b * c)); i++) {//looking for a divisor
				if ((((a * d) + (b * c)) % i == 0) && ((b * d) % i == 0)) {
					div = i;
				}
			}
			cout << "Результат сложения: " << ((a * d) + (b * c)) / div << dummychar << (b * d) / div;
			break;
		case'-':
			for (int i = 1; i < ((a * d) - (b * c)); i++) {//looking for a divisor
				if ((((a * d) - (b * c)) % i == 0) && ((b * d) % i == 0)) {
					div = i;
				}
			}
			cout << "Результат вычитания: " << ((a * d) - (b * c)) / div << dummychar << (b * d) / div;
			break;
		case'*':
			for (int i = 1; i < (a * c); i++) {//looking for a divisor
				if (((a * c) % i == 0) && ((b * d) % i == 0)) {
					div = i;
				}
			}
			cout << "Результат умножения: " << (a * c) / div << dummychar << (b * d) / div;
			break;
		case'/':
			for (int i = 1; i < (a * d); i++) {//looking for a divisor
				if (((a * d) % i == 0) && ((b * c) % i == 0)) {
					div = i;
				}
			}
			cout << "Результат умножения: " << (a * d) / div << dummychar << (b * c) / div;
			break;
		}
		cout <<endl<< "Еще раз? (n- нет) :";
		cin >> dummychar;
	} while (dummychar != 'n');
	return 0;
}
*/