#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];

    if (arr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    arr = nullptr;

    return 0;
}