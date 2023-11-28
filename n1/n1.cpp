#include <iostream>
#include <algorithm>
using namespace std;
//Напишіть програму, що друкує другий по величині елемент заданого не порожнього масиву різних чисел.
int main() {
	const int size_mas = 4;
	int arr[4];
	for (int i = 0; i < size_mas; i++) {
		cout << "Enter number: ";
		cin >> arr[i];
	}
	// Сортування та виведення.
	sort(arr, arr + size_mas, greater<int>());
	cout << "Second element: " << arr[1];


}
