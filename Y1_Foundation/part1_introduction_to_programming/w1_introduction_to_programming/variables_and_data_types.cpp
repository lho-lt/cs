#include <iostream>
using std::cout;
using std::endl;

// type variable_name;

// variable declaration without value
int height;

// variable declaration with value
int age = 19;

int main() {
    // PRIMITIVE TYPES //

    // INTEGER TYPES //

    // -2,147,483,648 to 2,147,483,647
    int regular_number = 42;

    // -32,768 to 32,767
    short small_number = 123;

    // −2,147,483,648 to 2,147,483,647 (32bits)
    // −9,223,372,036,854,775,808 to
    // 9,223,372,036,854,775,8079,223,372,036,854,775,807 (64bits)
    long big_number = 1234567890L;

    // Only positive numbers (0 to 4,294,967,295)
    unsigned int positive_only = 123;

    // FLOATING POINT TYPES //

    // Single precision (~7 deciamal digits)
    float decimal_number = 3.14f;

    // Double precision (~15 decimal digits)
    double precise_decimal = 3.14159;

    // CHARACTER TYPES //

    // Single character or small number (-128 to 127)
    char single_character = 'A';

    // Unicode character
    char32_t unicode_char = U'😀';

    // BOOLEAN TYPE //
    bool is_true = true;

    // STRING TYPE //
    std::string text = "Hello, C++!";

    // CONSTANT VARIABLES //
    const int FIXED_VALUE = 100;

    // AUTO TYPE (compiler determines automatically) //
    auto auto_number = 42;    // will be an int
    auto auto_decimal = 3.14; // will be a double

    // Size of different types
    cout << "Size in bytes:" << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "char16_t: " << sizeof(char16_t) << endl;
    cout << "std::string: " << sizeof(std::string) << endl;

    return 0;
}
