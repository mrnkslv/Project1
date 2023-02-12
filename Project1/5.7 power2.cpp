/*#include <iostream>
using namespace std;
double power(double n, int p);
double power(int n, int p);
long power(long n, int p);
float power (float n, int p);
double power(char n, int p);
int main() {
	setlocale(LC_ALL,"Rus");
	double n;
	int p;
	cout << "число: ";
	cin >> n;
	cout << "степень числа: ";
	cin >> p;
	cout<< "результат: "<< power (n,p);
	return 0;
}
double power(double n, int p=2) {
	if (p > 1) {
		return n* power(n,p-1);
	}
	else return n ;
}
double power(int n, int p = 2) {
	if (p > 1) {
		return n * power(n, p - 1);
	}
	else return n;
}
long power(long n, int p) {
	if (p > 1) {
		return n * power(n, p - 1);
	}
	else return n;
}
float power(float n, int p) {
	if (p > 1) {
		return n * power(n, p - 1);
	}
	else return n;
}
double power(char n, int p) {
	if (p > 1) {
		return int(n) * power(int(n), p - 1);
	}
	else return int(n);
}*/