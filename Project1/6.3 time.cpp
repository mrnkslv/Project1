
/*#include <iostream>
using namespace std;

class time {
private:
	int hours;
	int minutes;
	int secs;

public:
	time():hours(0), minutes(0), secs(0)
	{}
	time(int a, int b, int c) :hours(a), minutes(b), secs(c)
	{}

	time sum(time a, time b) {
		time temp;
		temp.hours = a.hours + b.hours;
		if (temp.hours >= 24) {
			temp.hours -= 24;
		}
		temp.minutes = a.minutes + b.minutes;
		if (temp.minutes >= 60) {
			temp.minutes -= 60;
			temp.hours++;
		}
		temp.secs = a.secs + b.secs;
		if (temp.secs >= 60) {
			temp.secs -= 60;
			temp.minutes++;
		}
		return temp;
	}
	void display() {
		cout << hours << ":" << minutes << ":" << secs;
	}
};
int main() {
	setlocale(LC_ALL,"Rus");
	class time result;
	const class time a(11, 34, 56), b(23, 44, 11);
	result = result.sum(a, b);
	result.display();
	return 0;
}
*/

