/*#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	 enum etype { laborer, secretary, manager, accountant, executive, researcher };
	struct date {
		int day;
		int month;
		int year;
	};
	struct employee {
		int id;
		float salary;
		etype prof;
		date firstWD;
	};
	employee e1, e2, e3;
	string s1, s2, s3;
	char ch1 = 'a', ch2 = 'b', ch3 = 'c';
	cout << "Список должностей: laborer, secretary, manager, accountant, executive, researcher " << endl;
	cout << "Введите идентификационный номер , зарплату, должность (первую букву) и дату принятия на работу первого сотрудника : ";
	cin >> e1.id >> e1.salary>>ch1>>e1.firstWD.day>>e1.firstWD.month>>e1.firstWD.year;
	cout << "Введите идентификационный номер, зарплату, должность (первую букву) и дату принятия на работу второго сотрудника : ";
	cin >> e2.id >> e2.salary >> ch2 >> e2.firstWD.day >> e2.firstWD.month >> e2.firstWD.year;
	cout << "Введите идентификационный номер , зарплату, должность (первую букву) и дату принятия на работу третьего сотрудника : ";
	cin >> e3.id >> e3.salary >> ch3 >> e3.firstWD.day >> e3.firstWD.month >> e3.firstWD.year;
		switch (ch1) {
		case 'l':
			 e1.prof = laborer;
			break;
		case 's':
			e1.prof = secretary;
			break;
		case 'm':
			e1.prof = manager;
			break;
		case 'a':
			e1.prof = accountant;
			break;
		case'e':
			e1.prof = executive;
			break;
		case 'r':
			e1.prof = researcher;
			break;
		};

		switch (e1.prof) {
		case 0:
			s1 = "laborer";
			break;
		case 1:
			s1 = "secretary";
			break;
		case 2:
			s1 = "manager";
			break;
		case 3:
			s1 = "accountant";
			break;
		case 4:
			s1 = "executive";
			break;
		case 5:
			s1 = "researcher";
			break;
		};

		switch (ch2) {
		case 'l':
			e2.prof = laborer;
			break;
		case 's':
			e2.prof = secretary;
			break;
		case 'm':
			e2.prof = manager;
			break;
		case 'a':
			e2.prof = accountant;
			break;
		case'e':
			e2.prof = executive;
			break;
		case 'r':
			e2.prof = researcher;
			break;
		};

		switch (e2.prof) {
		case 0:
			s2 = "laborer";
			break;
		case 1:
			s2 = "secretary";
			break;
		case 2:
			s2 = "manager";
			break;
		case 3:
			s2 = "accountant";
			break;
		case 4:
			s2 = "executive";
			break;
		case 5:
			s2 = "researcher";
			break;
		};

		switch (ch3) {
		case 'l':
			e3.prof = laborer;
			break;
		case 's':
			e3.prof = secretary;
			break;
		case 'm':
			e3.prof = manager;
			break;
		case 'a':
			e3.prof = accountant;
			break;
		case'e':
			e3.prof = executive;
			break;
		case 'r':
			e3.prof = researcher;
			break;
		};

		switch (e3.prof) {
		case 0:
			s3 = "laborer";
			break;
		case 1:
			s3 = "secretary";
			break;
		case 2:
			s3 = "manager";
			break;
		case 3:
			s3 = "accountant";
			break;
		case 4:
			s3 = "executive";
			break;
		case 5:
			s3 = "researcher";
			break;
		};

	cout << "Сотрудник с номером " << e1.id << " зарабатывает " << e1.salary << " долларов."<<endl
		<<"Должность: "<<s1 <<endl<< "Дата принятия на работу: "
		<<e1.firstWD.day<<"/"<<e1.firstWD.month<<"/"<<e1.firstWD.year<< endl;
	cout << "Сотрудник с номером " << e2.id << " зарабатывает " << e2.salary << " долларов." << endl
		<< "Должность: " << s2 << endl << "Дата принятия на работу: "
		<< e2.firstWD.day << "/" << e2.firstWD.month << "/" << e2.firstWD.year << endl;
	cout << "Сотрудник с номером " << e3.id << " зарабатывает " << e3.salary << " долларов." << endl
		<< "Должность: " << s3 << endl << "Дата принятия на работу: "
		<< e3.firstWD.day << "/" << e3.firstWD.month << "/" << e3.firstWD.year << endl;
	return 0;
}*/