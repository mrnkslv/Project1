/*#include <iostream>
using namespace std;
const int MAX = 10;

class fraction {
private:
	int integer;
	int fract;
public:
	fraction() : integer(0), fract(0)
	{}
	fraction(int a, int b) :integer(a), fract(b)
	{}
	char ch;
	void get_def() {
		cout << "Введите дробь в формате (3/4) :";
		cin >> integer >> ch >> fract;
	}
	void show_def() {
		cout << "Среднее значение: " << integer << '/' << fract << endl;
	}
	void sum(fraction f1, fraction f2) {
		int div = 1;
		for (int i = 1; i < ((f1.integer * f2.fract) + (f2.fract * f2.integer)); i++) {//looking for a divisor
			if ((((f1.integer * f2.fract) + (f2.fract * f2.integer)) % i == 0)
				&& ((f1.fract * f2.fract) % i == 0)) {
				div = i;
			}
		}
		if (f2.integer == 0 && f2.fract == 0) {
			integer = f1.integer;
			fract = f1.fract;
		}
		else {
			integer = ((f1.integer * f2.fract) + (f2.fract * f2.integer)) / div;
			fract = (f1.fract * f2.fract) / div;
		}
	}
	void fdiv(fraction f1, int dev) {

		integer = f1.integer ;
		fract = (f1.fract * dev);

		int div = 1;
		for (int i = 1; i < integer; i++) {//looking for a divisor
			if (((integer) % i == 0) && ((fract ) % i == 0)) {
				dev = i;
			}
		}
		integer /= div;
		fract /= div;

	}

};

int main() {
	setlocale(LC_ALL, "Rus");
	char ch;
	int i = 0;
	fraction arr[MAX];
	fraction amount = {0,0};
	do {
		arr[i].get_def();
		++i;
		cout << "Желаете продолжить? (n - нет) : ";
		cin >> ch;
	} while (ch != 'n'||i==MAX);

	for(int j=0;j<i;j++){
		amount.sum(arr[j], amount);
	}
	amount.fdiv(amount, i);
	amount.show_def();
	return 0;
}*/