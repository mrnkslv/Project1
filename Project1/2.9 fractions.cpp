/*#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c, d;
	char dummychar;
	cout << "������� ������ �����: ";
	cin >> a  >>dummychar>> b; // dummy character - /
	cout << "������� ������ �����: ";
	cin >> c>> dummychar>> d;
	int div = 1;
	for (int i = 1; i < ((a * d) + (b * c)); i++) {//looking for a divisor
		if ((((a * d) + (b * c))%i == 0) && ((b * d)% i  == 0)) {
			div = i;
		}
	}
	cout<< "��������� ��������: " << ((a * d) + (b * c))/div << dummychar << (b * d)/div;
		return 0;
}*/