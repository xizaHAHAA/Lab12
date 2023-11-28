#include <iostream>
#include <windows.h>

int main() {
    setlocale(0, ".1251");
    const int size = 100;
    int arr[size];
    using namespace std;

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 101 - 50;
    }


    cout << "Massive: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int currentLength = 1;
    int startIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            currentLength++;
        }
        else {

            if (currentLength > 1) {
                cout << "Спадна послідовність довжиною " << currentLength
                    << " починається з індексу " << startIndex << endl;
            }


            currentLength = 1;
            startIndex = i;
        }
    }

    if (currentLength > 1) {
        cout << "Спадна послідовність довжиною " << currentLength
            << " починається з індексу " << startIndex << endl;
    }

    return 0;
}