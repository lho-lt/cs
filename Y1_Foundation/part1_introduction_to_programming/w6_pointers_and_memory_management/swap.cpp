#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    swap(&x, &y);

    std::cout << "After swapping:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    return 0; 
}