#include <iostream>
#include <string>

int search(const std::string& str, const std::string& sub) {
    int str_length = str.length();
    int sub_length = sub.length();

    if (sub_length > str_length) {
        return -1;
    }

    for (int i = 0; i <= str_length - sub_length; ++i) {
        bool match = true;

        for (int j = 0; j < sub_length; ++j) {
            if (str[i + j] != sub[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            return i;
        }
    }

    return -1;
}

int main() {
    std::string str, sub;

    std::cout << "Enter the main string: ";
    std::getline(std::cin, str);
    std::cout << "Enter the substring: ";
    std::getline(std::cin, sub);

    int index = search(str, sub);

    if (index != -1) {
        std::cout << "Substring found at index: " << index << std::endl;
    } else {
        std::cout << "Substring not found!" << std::endl;
    }

    return 0;
}