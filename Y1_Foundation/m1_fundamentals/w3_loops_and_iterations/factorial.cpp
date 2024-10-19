#include <iostream>

int main() {
    int num;                    // Variable to store the input number
    long long factorial = 1;    // Variable to store the factorial result

    // Prompt the user to enter a number
    std::cout << "Enter your number: ";

    // Check if the input is a valid integer and non-negative
    if (!(std::cin >> num) || num < 0) {
        // If the input is invalid or non-negative, print an error message
        std::cerr << "Invalid input! Please enter a non-negative integer." << std::endl;
        return 1;   // Exit with non-zero status to indicate an error
    }

    // If the input is 0 or 1, return the result with 1;
    if (num == 0 || num == 1) {
        std::cout << "The factorial of " << num << " is " << factorial << std::endl;
        return 0;
    }

    // Calculate the factorial for number greater than 1
    for (int i = 2; i <= num; i++) {
        factorial *= i;
    }

    // Output the final factorial result
    std::cout << "The factorial of " << num << " is " << factorial << std::endl;

    return 0;
}
