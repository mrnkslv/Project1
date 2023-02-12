/*#include <iostream>
using namespace std;
struct Time {
	int hours;
	int minutes;
	int seconds;
};
void swap(Time &a, Time &b) {
	Time temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	Time a{ 11,34,18 }, b{ 18,20,58 };
	cout << a.hours << ":" << a.minutes<<":"<<a.seconds<<endl;
	cout << b.hours << ":" << b.minutes << ":" << b.seconds << endl;
	swap(a, b);
	cout << a.hours << ":" << a.minutes << ":" << a.seconds << endl;
	cout << b.hours << ":" << b.minutes << ":" << b.seconds << endl;

	return 0;
}*/