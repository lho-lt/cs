#include <iostream>

// Function to pad a string with spaces evenly on both sides
std::string pad_space (const std::string& str, int total_length) {
    int current_length = str.length();   // Get the length of the input string

        // If the string is already longer or equal to the total desired length, return it as is
    if (current_length >= total_length) {
        return str;
    }

        // Calculate total amount of padding needed
    int total_padding = total_length - current_length;

    // Divide the padding evenly: half on the left
    int pad_left = total_padding / 2;

      // The rest of the padding will go to the right
    int pad_right = total_padding - pad_left;

     // Return the padded string with spaces on both sides
    return std::string(pad_left, ' ') + str + std::string(pad_right, ' ');
}

int main() {
    int row_num = 10;    // Number of rows (multiples of 1-10)
    int column_num = 10; // Number of columns (multiples of 1-10)

    // Loop through rows (1 to 10)
    for (int i = 1; i <= row_num; i++) {
        // Loop through columns (1 to 10)
        for (int j = 1; j <= column_num; j++) {
            // Print the product of row * column, padded to 9 characters with spaces
            std::cout << pad_space(std::to_string(i * j), 9);
        }
        // Move to the next line after printing all columns in the current row
        std::cout << std::endl;
    }

    return 0;
}