/*#include <iostream>
using namespace std;
class angle {
private:
	int ang;
	float minutes;
	char direction;
public:
	angle(int a, float m, char d) :ang(a), minutes(m), direction(d)
	{}
	angle() :ang(0), minutes(0), direction(0)
	{}
	void get_definition() {
		cout << "Введите градусы, минуты и направление через пробел: ";
		cin >> ang >> minutes >> direction;
	}
	void show_definition() {
		char ch = '°';
		cout << ang << ch << minutes << "." << direction << "'" << endl;
	}
};
class ship {
private:
	static int index;
	angle length;
	angle width;
	int num;
public:
	ship()
	{
		index++;
		num = index;
	}
	void shipdata() {
		length.get_definition();
		width.get_definition();
	}
	void display() {
		cout << "Учетный номер корабля: " << num << endl
			<< "Долгота: ";
		length.show_definition();
		cout << "Широта: ";
		width.show_definition();
		cout << endl;
	}

};
int ship::index = 0;

int main() {
	setlocale(LC_ALL, "Rus");
	char ch = 'a';
	do {
		ship s1;
		ship s2;
		ship s3;
		s1.shipdata();
		s2.shipdata();
		s3.shipdata();
		s1.display();
		s2.display();
		s3.display();
		cout << endl << "Желаете продолжить? (n- нет) :";
		cin >> ch;
	} while (ch != 'n');

	return 0;
}*/