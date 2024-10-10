#include <iostream>

int main() {
    double score, full_marks;

    std::cout << "Enter your score: ";
    if (!(std::cin >> score)) {
        std::cerr << "Invalid input. Please enter a valid score." << std::endl;
        return 1;
    }

    std::cout << "Enter full marks: ";
    if (!(std::cin >> full_marks)) {
        std::cerr << "Invalid input. Please enter valid full marks."
                  << std::endl;
        return 1;
    }

    if (full_marks <= 0) {
        std::cout << "Full marks must be greater than zero!" << std::endl;
        return 1;
    }
    if (full_marks < score) {
        std::cout << "Full marks should not be less than you actual score!"
                  << std::endl;
        return 1;
    }

    double grade_percentage = score / full_marks * 100;
    char grade;

    if (grade_percentage < 60) {
        grade = 'F';
    } else if (grade_percentage < 70) {
        grade = 'D';
    } else if (grade_percentage < 80) {
        grade = 'C';
    } else if (grade_percentage < 90) {
        grade = 'B';
    } else {
        grade = 'A';
    }

    std::cout << "You got an " << grade << std::endl;
    return 0;
}
