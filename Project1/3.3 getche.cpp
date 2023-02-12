/*#include <iostream>
#include <conio.h> //for getche()
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	char ch='a';
	long y = 0;
	cout << "Введите число: ";
	for (int i = 0; i < 6; i++) {
		ch = _getche();
		long x;
		x = ch - '0';
		y = y * 10 + x;
		if (i == 5) {
			cout <<endl<<"Вы ввели число: " << y;
		}
	}
	return 0;
}*/