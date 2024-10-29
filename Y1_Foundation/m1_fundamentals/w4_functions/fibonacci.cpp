#include <iostream>

// Function to compute the Fibonacci number at a given index using iteration
unsigned long long fibonacci(int index) {
    if (index <= 1)
        return index; // Return 0 or 1 for index 0 and 1, respectively

    unsigned long long a = 0, b = 1, result = 0;
    // Iteratively compute Fibonacci numbers up to the given index
    for (int i = 2; i <= index; i++) {
        result = a + b;
        a = b; // Move to the next Fibonacci number
        b = result;
    }
    return result;
}

int main() {
    std::cout << "Fibonacci Number Giveaway\n" << std::endl;
    std::cout << "Which one do you want, kid?" << std::endl;

    int index;
    // Validate input to ensure it's a non-negative integer
    if (!(std::cin >> index) || index < 0) {
        std::cerr << "We don't have that, kid. Try integers next time."
                  << std::endl;
        return 1;
    }

    unsigned long long result = fibonacci(index);
    std::cout << "Here's your Fibonacci, kid. " << result << std::endl;
}