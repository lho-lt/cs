#include <iostream>

// Function to check if a number is prime
bool prime_check(unsigned long long num) {
    if (num == 1)
        return false; // 1 is not considered prime
    if (num <= 3)
        return true; // 2 and 3 are prime

    if (num % 2 == 0)
        return false; // exclude even numbers greater than 2

    // Check only odd divisors up to the square root of num
    for (unsigned long long i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return false; // if divisible, num is not prime
    }

    return true;
}

int main() {
    unsigned long long num;

    std::cout << "Prime Checking Police👮 \n" << std::endl;
    std::cout << "Enter your number (positive integers only): ";

    // Check for valid input: only positive integers
    if (!(std::cin >> num) || num < 1) {
        std::cerr
            << "That was not a positive integer.\n🚨You are going to jail!🚨"
            << std::endl;
        return 1;
    }

    // Output result based on prime_check function
    if (prime_check(num)) {
        std::cout << "Okay, that was a prime number.\nYou can go." << std::endl;
    } else {
        std::cout << "That was not a prime.\n🚨You are going to jail!🚨"
                  << std::endl;
    }

    return 0;
}