/*#include <iostream>
using namespace std;
const int MAX = 100;
class Distance {
private:
	int feet;
	float inches;
public: 
	Distance (): feet(0),inches(0.0)
	{}
	void getdist() {
		cout << "\n Введите футы: ";
		cin >> feet;
		cout<< "\n Введите дюймы: ";
		cin >> inches;
	}
	void showdist() const {
		cout << feet << "\'-" << inches;
	}
	Distance add_dist( const Distance& d2) const {
		Distance temp;
		temp.inches = inches + d2.inches;
		if (temp.inches >= 12.0) {
			temp.inches -= 12.0;
			temp.feet = 1;
		}
		temp.feet += feet + d2.feet;
		return temp;
	}
	void div_dist(Distance d2, int divisor) {
		int fltfeet = d2.feet*12 + d2.inches;
		fltfeet /= divisor;
		inches = fltfeet % 12;
		feet = fltfeet /12;
	}
};


int main() {
	setlocale(LC_ALL, "Rus");
	Distance arr[MAX];
	int i = 0;
	char ch;
	do {
		arr[i].getdist();
		i++;
		cout << "Продолжить? (y/n)";
		cin >> ch;
	} while (ch != 'n');
	Distance sum,res;
	for (int j = 0; j < i; j++) {
		sum = arr[j].add_dist(sum);
	}
	res.div_dist(sum, i);
	res.showdist();

	return 0;
}
*/