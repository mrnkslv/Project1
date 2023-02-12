/*#include <iostream>
#include<string>
#include <windows.h>
using namespace std;
const int MAX = 100;

class employee {
private:
	string name;
	long number;
public:
	void getdata() {
		cout << "Введите имя  сотрудника и поставьте точку в конце: ";
		getline(cin,name,'.');
		cout << "Введите номер сотрудника: ";
		cin >> number;
	}
	void putdata() {
		cout << "Имя сотрудника: " << name << endl << "Номер сотрудника: " << number << endl;
	}
};


int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	employee arr[MAX];
	int j = 0;
	for (int i = 0; i < MAX; i++) {
		arr[i].getdata();
		char answer;
		cout << "Продолжить? (n-нет)";
		cin >> answer;
		if (answer == 'n') {
			j++;
			break;
		}
	}
	for (int i = 0; i <=j; i++) {
		arr[i].putdata();
	}
	return 0;
}*/