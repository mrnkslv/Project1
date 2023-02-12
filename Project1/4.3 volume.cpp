/*#include <iostream>
using namespace std;
struct Distance {
	int feet;
	float inches;
};
struct Volume {
	Distance height;
	Distance width;
	Distance length;
};

int main() {
	setlocale(LC_ALL, "Rus");
	Volume room{ 3,0,5,0,8,12 };
	float height = room.height.feet * 12 + room.height.inches;
	float width = room.width.feet * 12 + room.width.inches;
	float length = room.length.feet * 12 + room.length.inches;
	float result = (height * width * length);
	int feet = result / 1728;
	cout << "־בתול נאגום: " << feet << " פףעמג "<< result-feet*1728 << " ה‏ילמג";

	return 0;
}*/