# Strings and String Manipulation

## Working with `std::string`

`std::string` provides a dynamic, flexible way to handle strings, automatically resizing and providing useful functions for string manipulation.

### Basic Operations

To use `std::string` include the `<string>` header:

```cpp
#include <string>
```

- Declaring a string:

    ```cpp
    std::string str = "Hello, world!";
    ```

- Creating an empty string:
  
    ```cpp
    std::string empty_str;
    ```

- Assigning a string to a string variable:
  
    ```cpp
    str = "New String";
    ```

## Common String Functions

### Concatenation

- Using the `+` operator:

    ```cpp
    std::string str1 = "Hello";
    std::string str2 = "World!";
    std::string result = str1 + ", " + str2; // "Hello, World!"
    ```

- Using `append()` function:
  
    ```cpp
    str1.append(", ").append(str2); // str1 is now "Hello, World!"
    ```

### Length

We can get the length of a string using the `size()` or `length()` function. Both are equivalent.

```cpp
std::string str = "Hello";
std::cout << str.size() << std::endl; // Output: 5
```

### Substrings

We can use `substr()` function to extract a substring from a string. It takes two arguments: **the starting index** and **the length of the substring**(optional).

```cpp
std::string str = "Hello, World!";
std::string sub = str.substr(7, 5); // "World"
```

if we only provide the starting index, the substring will go from there to the end:

```cpp
std::string sub = str.substr(7); // "World!"
```

### Searching for a substring

The `find()` function returns the index of the first occurrence or `std::string::npos` if not found.

```cpp
std::string str = "Hello, World!";
size_t pos = str.find("World"); // pos = 7
if (pos != std::string::npos) {
    std::cout << "Found at index " << pos << std::endl;
} else {
    std::cout << "Substring not found!" << std::endl;
}
```

### Comparison

## Character Arrays vs. `std::string`

### Character Arrays

A C-style string is simply an array of characters that ends with a null character (`\0`). We manipulate these using pointers or array indexing.

```cpp
char str[] = "Hello, World!";
```

- **C-style Strings** (`char[]`):
  - Simple array of characters terminated by a null character (`\0`).
  - Manual memory management required for dynamic allocation.
  - Fixed size (cannot be resized after initialization).
  - Lack of built-in functions for string manipulation.

- **`std::string`**:
  - Managed by the Standard Library, automatically resizes when needed.
  - Rich set of built-in functions like `append()`, `find()`, `substr()`, etc.
  - Safer (checks bounds, automatic memory management).
  - Slightly higher memory overhead

### Additional String Functions

- **`c_str()`**: Converts a `std::string` to a C-style string (`const char*`).
  
    ```cpp
    std::string str = "Hello";
    const char* c_str = str.c_str(); // Conversion to C-style string
    ```

- **`insert()`**: Inserts a substring at a specific position.
  
    ```cpp
    str.insert(5, ", there");
    // str is now "Hello, there"
    ```

- **`erase()`**: Removes part of the string starting from a given position.
  
    ```cpp
    str.erase(5, 7); // Erases ", there"
    ```
