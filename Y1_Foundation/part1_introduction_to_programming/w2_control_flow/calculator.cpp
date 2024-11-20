#include <iostream>

int main() {
    double no1, no2;

    std::cout << "Enter first number: ";
    if (!(std::cin >> no1)) {
        std::cerr << "Invalid input!";
        return 1;
    }

    std::cout << "Enter other number: ";
    if (!(std::cin >> no2)) {
        std::cerr << "Invalid input!";
        return 1;
    }

    char operation;
    std::cout << "Choose operation (+, -, *, /): ";
    if (!(std::cin >> operation)) {
        std::cerr << "Invalid operation!";
        return 1;
    }

    double result;
    switch (operation) {
    case '+':
        result = no1 + no2;
        break;
    case '-':
        result = no1 - no2;
        break;
    case '*':
        result = no1 * no2;
        break;
    case '/':
        result = no1 / no2;
        break;
    }

    std::cout << "Result is: " << result << std::endl;

    return 0;
}
