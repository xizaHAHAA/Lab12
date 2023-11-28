#include <iostream>
#include <algorithm>
#include <random>
using namespace std;
//2. Задати одновимірний масив із 𝑚 цілих чисел, що дорівнюють 0, 1, 2, m=15. 
// Поміняти числа місцями таким чином, щоб вони розташувались у такому порядку: 0, 1, 2.
int main() {
	random_device rd;
	mt19937 g(rd());
	const int size = 15;
	int arr[] = { 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2 };
	cout << "Default array: ";


	//Виведення стандартного масиву
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << " " << endl;


	//Перемішування чисел в масиві
	cout << "Shuffled array: ";
	shuffle(begin(arr), end(arr), g);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << " " << endl;


	cout << "Sorted array: ";
	int big;
	big = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + big);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}




}



