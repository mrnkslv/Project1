/*#include <iostream>
using namespace std;
char ch;
class fraction {
private:
	int integer;
	int fract;
public: 
	void get_def() {
		cout << "Введите дробь в формате (3/4) :" ;
		cin >> integer >> ch >> fract;
	}
	void show_def() {
		cout << "Результат: " << integer << ch << fract<<endl;
	}
	void sum(fraction f1, fraction f2) {
		int div = 1;
		for (int i = 1; i < ((f1.integer * f2.fract) + (f2.fract * f2.integer)); i++) {//looking for a divisor
			if ((((f1.integer * f2.fract) + (f2.fract * f2.integer)) % i == 0) 
				&& ((f1.fract * f2.fract) % i == 0)) {
				div = i;
			}
		}
		integer = ((f1.integer * f2.fract) + (f2.fract * f2.integer)) / div;
		fract = (f1.fract * f2.fract) / div;
	}
};
int main() {
	setlocale(LC_ALL, "Rus");
	fraction f1, f2,f3;
	char dummychar;
	do {
		f1.get_def();
		f2.get_def();
		f3.sum(f1, f2);
		f3.show_def();
		cout << "Желаете продолжить? (n-нет): ";
		cin >> dummychar;
	} while (dummychar != 'n');
	return 0;
}*/