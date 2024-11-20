#include <iostream>
#include <vector>

enum MinMax { MIN, MAX };

int min_max(std::vector<int> &arr, MinMax option) {
    int result = arr[0];

    if (option == MIN) {
        for (int e : arr) {
            if (result > e) {
                result = e;
            }
        }
    } else {
        for (int e : arr) {
            if (result < e) {
                result = e;
            }
        }
    }

    return result;
}

int main() {
    // Why vector ?
    // I don't know. Just felt like it
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};

    int max_value = min_max(arr, MAX);
    int min_value = min_max(arr, MIN);

    std::cout << "Min value: " << min_value << std::endl;
    std::cout << "Max value: " << max_value << std::endl;
    
    return 0;
}