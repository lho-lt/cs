#include <iostream>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}
