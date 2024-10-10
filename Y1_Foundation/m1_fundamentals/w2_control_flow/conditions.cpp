#include <iostream>

int main() {
    double a = 45, b = 45;
    if (a < b) {
        std::cout << "Reasonable" << std::endl;
        return 0;
    } else {
        std::cout << "Unreasonable" << std::endl;
        return -1;
    }

    int number;

    std::cout << "Enter a number (whole number, can be negative): ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    int day;
    std::cout << "Enter a day (1-7): ";
    std::cin >> day;

    switch (day) {
    case 1:
        std::cout << "It's Monday!" << std::endl;
        break;
    case 2:
        std::cout << "It's Tuesday!" << std::endl;
        break;
    case 3:
        std::cout << "It's Wednesday!" << std::endl;
        break;
    case 4:
        std::cout << "It's Thursday!" << std::endl;
        break;
    case 5:
        std::cout << "It's Friday!" << std::endl;
        break;
    case 6:
        std::cout << "It's Saturday!" << std::endl;
        break;
    case 7:
        std::cout << "It's Sunday!" << std::endl;
        break;
    default:
        std::cout << "Invalid Day!!" << std::endl;
        break;
    }

    return 0;
}
