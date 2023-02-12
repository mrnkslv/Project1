/*#include <iostream>
#include <cstring> //дл€ подсчета длины массива
#include < windows.h > // дл€ setconsole 
using namespace std;
const int MAX = 80;

void reversit(char a[]) {
	char b;
	int j = 0, len = strlen(a);
	for (int i = len - 1; i >= len / 2; i--) {
			 b = a[i] ;
			a[i]=a[j];
			a[j] = b;
			j++;
		}

}

int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251); // ¬вод с консоли в кодировке 1251
	SetConsoleOutputCP(1251);
	cout << "¬ведите предложение : " << endl;
	char string[MAX];
	cin.get(string, MAX);
	reversit(string);
	for (int i = 0; i < strlen(string); i++) {
		cout << string[i];
		
	}
	return 0;
}*/