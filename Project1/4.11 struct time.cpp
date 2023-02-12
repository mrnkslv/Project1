/*#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	struct time {
		int hours;
		int minutes;
		int seconds;
	};
	time t1,t2,t3;
	char ch = ':';
	cout << "¬ведите первое врем€ в следующем формате часы:минуты:секунды    ";
	cin >> t1.hours >>ch>> t1.minutes >> ch >> t1.seconds;
	cout << "¬ведите второе врем€ в следующем формате : часы:минуты:секунды    ";
	cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
	long totalsecs1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	long totalsecs2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
	long sum = totalsecs1 + totalsecs2;
	t3.hours = sum / 3600;
	t3.minutes = (sum - t3.hours * 3600) / 60;
	t3.seconds = sum - (t3.hours * 3600) - (t3.minutes * 60);

	while (t3.hours > 24) {
		t3.hours -= 24;
	}
	cout << "¬рем€ в сумме равно: " << t3.hours << ch << t3.minutes << ch << t3.seconds;
	return 0;
}*/