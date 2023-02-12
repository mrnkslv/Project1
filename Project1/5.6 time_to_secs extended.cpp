
/*#include<iostream>
using namespace std;
struct Time {
	int hours;
	int minutes;
	int seconds;
};
int main() {
	long time_to_secs(Time);
	Time secs_to_time(long);
	setlocale(LC_ALL, "Rus");
	Time t1, t2, t3;
	char ch = ':';
	cout << "¬ведите первое врем€ в следующем формате часы:минуты:секунды    ";
	cin >> t1.hours >>ch>> t1.minutes >> ch >> t1.seconds;
	cout << "¬ведите второе врем€ в следующем формате : часы:минуты:секунды    ";
	cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
	long sum = time_to_secs(t1) + time_to_secs(t2);
	t3=secs_to_time(sum);
	cout << "¬рем€ в сумме равно: " << t3.hours << ch << t3.minutes << ch << t3.seconds;
	return 0;
}

long time_to_secs(Time t1) {
	return t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
}
Time secs_to_time(long a) {
	Time t3;
	t3.hours = a / 3600;
	t3.minutes = (a - t3.hours * 3600) / 60;
	t3.seconds = a - (t3.hours * 3600)-(t3.minutes * 60);
	while (t3.hours > 24) {
		t3.hours -= 24;
	}
	return t3;
}*/