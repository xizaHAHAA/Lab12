#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	const int size_mas = 4;
	int arr[4];
	int sum_all = 0;
	int max = 0;
	int sum_plus = 0;
	int last = -1;

	for (int i = 0; i < size_mas; i++) {
		cout << "Enter number: ";
		cin >> arr[i];
	}
	//Сума всіх
	for (int i = 0; i < size_mas; i++) {
		sum_all += arr[i];
	}

	cout << "Sum: " << sum_all << endl;
	//Сума додатніх
	for (int i = 0; i < size_mas; i++) {
		if (arr[i] > 0) {
			last = i;
		}
	}
	for (int i = 0; i <= last; i++) {
		sum_plus += arr[i];
	}
	cout << "Sum_plus: " << sum_plus << endl;


	//Макс
	for (int i = 0; i < size_mas; i++) {
		if (arr[i] > max) {
			max = arr[i];

		}
	}
	cout << "Max: " << max;


	return 0;
}