/*#include <iostream>
using namespace std;

struct sterling {
	int pounds;
	int shillings;
	int pence;
};

int main() {
	setlocale(LC_ALL, "Rus");
	double newform;
	char ch;
	cout << "������� ����� � ����� ���������� ������: ";
	cin >>ch>> newform;
	sterling sum;
	sum.pounds = newform ;
	sum.shillings = (newform*240 - sum.pounds*240) / 12;
	sum.pence = newform*240 - sum.pounds*240  - sum.shillings * 12;
	cout << " ������: " << sum.pounds << endl << "���������: " << sum.shillings << endl << "������: " << sum.pence << endl;
	//cout << "���������� ������: J" << ((funts * 20 * 12) + (shilling * 12) + penses) / (20 * 12);
	return 0;
}*/