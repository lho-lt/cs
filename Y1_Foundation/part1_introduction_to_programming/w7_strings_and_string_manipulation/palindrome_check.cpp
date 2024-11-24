#include <iostream>
#include <string>

bool is_alphanumeric(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9'));
}

char to_lowercase(char c) {
    /**
     * The ASCII value of 'A' is 65, and the ASCII value of 'a' is 97.
     * The difference between 'a' and 'A' is 97 - 65 = 32.
     * Adding ('a' - 'A') (which is 32) to an uppercase character c, it shifts
     * the character's ASCII value by 32, converting it to the corresponding
     * lowercase letter.
     */
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool is_palindrome(const std::string &str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        if (!is_alphanumeric(str[left])) {
            left++;
        } else if (!is_alphanumeric(str[right])) {
            right--;
        } else {
            char left_char = to_lowercase(str[left]);
            char right_char = to_lowercase(str[right]);

            if (left_char != right_char) {
                return false;
            }
            left++;
            right--;
        }
    }
    return true;
}

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str); // Read the whole line including spaces

    if (is_palindrome(str)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}