/*#include <iostream>
using namespace std;
struct Distance {
	int feet;
	int inches;
};
Distance isBigger(Distance,Distance);
int main() {
	setlocale(LC_ALL,"Rus");
	Distance a,b,big;
	cout << "������� ������ ���������� � ����� � ������: ";
	cin >> a.feet>>a.inches;
	cout << "������� ������ ���������� � ����� � ������: ";
	cin >> b.feet >> b.inches;
	big = isBigger(a, b);
	cout << "���������� ���������� - �����: " << big.feet<<" ������: "<< big.inches;
	return 0;
}
Distance isBigger(Distance first, Distance second) {
	if (first.feet>second.feet) {
		return first;
	}
	else if (first.feet == second.feet && first.inches > second.inches) {
		return first;
	}
	else
		return second;
}
*/