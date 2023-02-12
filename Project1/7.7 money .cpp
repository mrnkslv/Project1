//доделать 
#include<iostream>
#include<STDLIB.H>
#include<string>
using namespace std;
const int MAX = 40;

class money {
private:
	char s[MAX];
public:
	long double mstold() {
		char arr[MAX];
		cin.get(arr, MAX);
		string b;
		string a = string(arr);
		for (int i = 0; i < a.size(); i++) {
			if (a.find_first_of("01234567890,")) {
				b += a.find_first_of("01234567890,");
				continue;
			}
		}
		cout << b;
		//for (int i = 0; i < sizeof(arr); i++) {
		return 1;
		}
};

int main() {
	setlocale(LC_ALL, "Rus");
	money b;
	long double a;
	a=b.mstold();
	cout << a;



	return 0;
}