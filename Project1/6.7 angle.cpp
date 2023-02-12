/*#include<iostream>
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
		cout << "Введите градусы, минуты и напрвление через пробел: ";
		cin >> ang >> minutes >> direction;
	}
	void show_definition() {
		char ch = '°';
		cout << "Значение координаты: " << ang << ch << minutes << "." << direction << "'"<<endl;
	}
};

int main() {
	setlocale(LC_ALL, "Rus");
	angle first{ 179,59,'W'};
	first.show_definition();
	char ch;
	do {
		angle second;
		second.get_definition();
		second.show_definition();
		cout <<endl<< "Желаете продолжить? (n- нет) :";
		cin >> ch;
	} while (ch != 'n');

	return 0;
}*/