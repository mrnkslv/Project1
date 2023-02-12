/*#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	unsigned int numb;
	unsigned long fact = 1;
	char ch = 'a';
	do {
		cout << "Введите целое число: ";
		cin >> numb;
		for (int j = numb; j > 0; j--) {
			fact *= j;
		}
		cout << "Факториал числа равен: " << fact << endl;
		cout << "Желаете произвести еще одно вычисление? (0-выход) : ";
		cin >> ch;
	} while (ch != '0');
	return 0;
}*/