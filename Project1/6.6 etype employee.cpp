
/*#include <iostream>
using namespace std;
char dummychar;
enum etype { laborer, secretary, manager, accountant, executive, researcher };
class date {
private:
	int day;
	int month;
	int year;
public:
	void getdate() {
		cout << "������� ����, ����� � ��� ��������������� � ������� 31/12/2022 : ";
		cin >> day >> dummychar >> month >> dummychar >> year;
	}
	void showdate() {
		cout << "���� ���������������: " << day << dummychar << month << dummychar << year << endl;
	}
};
class employee {
private:
	int id;
	float salary;
	date startdate;
	etype position;
public:
	void getemploy() {
		cout << "������� id � ����� ���������� ����� ������: ";
		cin >> id >> salary;
		startdate.getdate();
		char ch = 'a';
		cout << "������� ������ ����� ��������� (laborer, secretary, manager, accountant, executive, researcher) : ";
		cin >> ch;
		switch (ch) {
		case 'l':
			position = laborer;
			break;
		case 's':
			position = secretary;
			break;
		case 'm':
			position = manager;
			break;
		case 'a':
			position = accountant;
			break;
		case'e':
			position = executive;
			break;
		case 'r':
			position = researcher;
			break;
		}

	}
	void putemploy() {
		cout << "��������� � ������� " << id << " ������������ " << salary << " ��������." << endl;
		startdate.showdate();
		cout << "������ �������� ���������: ";

		switch (position) {
		case 0:
			cout << "laborer" << endl;
			break;
		case 1:
			cout << "secretary" << endl;
			break;
		case 2:
			cout << "manager" << endl;
			break;
		case 3:
			cout << "accountant" << endl;
			break;
		case 4:
			cout << "executive" << endl;
			break;
		case 5:
			cout << "researcher" << endl;
			break;
		}
	}
};
int main() {
	setlocale(LC_ALL, "Rus");
	employee e1, e2, e3;
	e1.getemploy();
	e2.getemploy();
	e3.getemploy();
	e1.putemploy();
	e2.putemploy();
	e3.putemploy();
	return 0;
}*/
