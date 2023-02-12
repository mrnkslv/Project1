/*#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	enum etype {laborer, secretary, manager, accountant, executive, researcher};
	etype prof = laborer;
	char ch = 'a';
	cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher) : ";
	cin >> ch;
	switch (ch) {
	case 'l':
		prof = laborer;
		break;
	case 's':
		prof = secretary;
		break;
	case 'm':
		prof = manager;
		break;
	case 'a':
		prof = accountant;
		break;
	case'e':
		prof = executive;
		break;
	case 'r':
		prof = researcher;
		break;
	}
	cout << "Полное название должности: ";

	switch (prof) {
	case 0:
		cout<<"laborer";
		break;
	case 1:
		cout<<"secretary";
		break;
	case 2:
		cout<<"manager";
		break;
	case 3:
		cout << "accountant";
		break;
	case 4:
		cout << "executive";
		break;
	case 5:
		cout << "researcher";
		break;
	}
	return 0;
}
*/