/*#include <iostream>
using namespace std;
const int MAX = 80;
int maxint(int arr[], int i) {
	int Indmax,max=0;
	for (int j = 0; j < i; j++) {
		if (max < arr[j]) {
			max = arr[j];
			Indmax = j;
		}
	}

	return Indmax;
}
int main() {
	setlocale(LC_ALL, "Rus");
	char ans;
	int arr[MAX],i=0;
	do {
		cout << "������� �����: ";
		cin >> arr[i];
		i++;
		cout << "������� ����������? (n- ���) : ";
		cin >> ans;
	} while (ans != 'n');

	cout << "���������� �������: " << arr[maxint(arr, i)]<<endl;
	cout << "������ � ������� : " << maxint(arr, i);
	return 0;
}*/