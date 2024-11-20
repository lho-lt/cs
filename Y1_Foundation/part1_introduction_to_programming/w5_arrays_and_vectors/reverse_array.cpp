#include <iostream>

void reverse(int *arr, int size) {
    int left = 0;         // Starting index of the array
    int right = size - 1; // Last index of the array

    while (left < right) {
        int temp =
            arr[left]; // Temporary variable to store the value of arr[left]
        arr[left] = arr[right];
        arr[right] = temp;

        // Move toward the center
        left++;
        right--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Get the size of the array

    reverse(arr, size);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
