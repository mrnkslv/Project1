/*#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth {
private:
	unsigned int num_of_cars;
	double profit;
public:
	tollBooth():num_of_cars(0), profit(0)
	{}
	void payingCar() {
		num_of_cars++;
		profit += 0.50;
	}
	void nopayCar() {
		num_of_cars++;
	}
	void display() {
		cout << endl<<" ������ ��������: " << num_of_cars << endl
			<< "������� ���������: " << profit << " ������ "<<endl;
	}
};
int main() {
	setlocale(LC_ALL,"Rus");
	tollBooth prog;
	do {
		cout << "�������� ������ - 1, ������� ������ -2 , ���������� - esc , ����� - 5. ������� ������� : ";
		switch (_getche()) {
		case '1':
			prog.nopayCar();
			cout << endl;
			break;
		case '2':
			prog.payingCar();
			cout << endl;
			break;
		case 27:
			prog.display();
			cout << endl;
			break;
		}
	}
	while (_getche() != '5');
	return 0;
}
*/