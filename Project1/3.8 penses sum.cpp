/*#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int funts1, penses1, shilling1, funts2, penses2, shilling2;
	char dummychar;
	do {
		cout << "Введите первую сумму (например J5.8.9): ";
		cin >> dummychar >> funts1 >> dummychar >> penses1 >> dummychar >> shilling1;
		cout << "Введите вторую сумму (например J5.8.9): ";
		cin >> dummychar >> funts2 >> dummychar >> penses2 >> dummychar >> shilling2;
		float sum1 = ((float(funts1) * 20 * 12) + (float(shilling1) * 12) + float(penses1)) / (20 * 12);
		float sum2 = ((float(funts2) * 20 * 12) + (float(shilling2) * 12) + float(penses2)) / (20 * 12);
		float sum3 = sum1 + sum2;
		int sum_in_penses = sum3 * 240;
		int penses = sum_in_penses % 12;
		int funts = (sum_in_penses - penses) / 240;
		int shilling = (sum_in_penses - penses - (funts * 240)) / 12;
		cout << "Всего : J" << funts << "." << shilling << "." << penses<<endl;
		cout << " Желаете продолжить?  (n- нет): ";
		cin >> dummychar;

	} while (dummychar != 'n');

	return 0;
}*/
