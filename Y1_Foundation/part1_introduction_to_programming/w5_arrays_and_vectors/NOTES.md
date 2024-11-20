# Arrays and Vectors

## One-Dimensional Array

A one-dimensional array is a collection of elements of the same type, stored in contiguous memory locations. In simpler terms, it’s a list or sequence of values.

### Key Points

- **Fixed Size**: The size of an array must be specified at compile time and cannot change during runtime.

### Declaration and Initialization

```cpp
// Declaring an array
int numbers[5]; // declares an array of 5 integers, contains unspecified values until initialized

// Initializing an array
int numbers[5] = {1, 2, 3, 4, 5}; // initializes with specific values

// Initializing without specifying size (size inferred)
int numbers[] = {1, 2, 3, 4, 5}; // size is automatically set to 5

// Constant Arrays
const int numbers[5] = {1, 2, 3, 4, 5}; // values cannot be changed

```

### Accessing and Modifying Elements

```cpp
// Accessing elements (index starts at 0)
int first_number = numbers[0]; // firstNumber is now 1

// Modifying an element
numbers[0] = 10; // array becomes {10, 2, 3, 4, 5}
```

### Array Length

```cpp
// Calculating the length of an array
int size = sizeof(numbers) / sizeof(numbers[0]); // gives the number of elements
```

### Iterating Through an Array

```cpp
// Standard for loop
for (int i = 0; i < size; ++i) {
    // loop logic
}

// Range-based for loop (C++11 and later)
for (int num : numbers) {
    // loop logic
}
```

## Vectors

Vectors are dynamic arrays that can resize automatically when elements are added or removed, providing a flexible way to manage collections of data.

### Key Points

- **Dynamic Size**: Unlike arrays, vectors can grow and shrink dynamically.
- **Contiguous Memory**: Vectors maintain elements in contiguous memory for efficient access and iteration.
- **Element Access**: Elements can be accessed using the subscript operator ([] like arrays), at() method, or front() and back() methods for the first and last elements.

### Using Vectors

```cpp
  // To use vectors, include the libray in header
  #include <vector>
```
  
### Declaration and Initialization
  
```cpp
// Declaring an empty vector
std::vector<int> numbers;

// Declaring a vector with a predefined size (initialized with zeros)
std::vector<int> numbers(10); // creates a vector of size 10 filled with zeros

// initializes with specific values
std::vector<int> numbers = {1, 2, 3, 4, 5};

// Newer syntax (C++11)
std::vector<int> numbers{1, 2, 3, 4, 5};
```

### Adding and Accessing Elements

```cpp
// Adding an element to the end
numbers.push_back(11); // adds 11 to the vector

// Accessing elements
int first = numbers[0]; // using subscript operator
int second = numbers.at(1); // using at() method for bounds checking
```

### Size and Capacity

```cpp
// Getting the size of the vector
size_t size = numbers.size(); // returns the number of elements

// Getting the capacity of the vector
size_t capacity = numbers.capacity(); // returns the number of elements it can hold before resizing

// Resizing
numbers.resize(20); // changes the size to 20, new elements initialized to 0

```

### Removing Elements

```cpp
// Removing the last element
numbers.pop_back(); // removes the last element

// Removing an element at a specific position
numbers.erase(numbers.begin() + 1); // removes the second element

// Removing all elements from the vector
numbers.clear();
```

### Iterating Over Vectors

```cpp
// Range-based for loop
for (int num : numbers) {
    // loop logic
}

// Iterator-based loop
for (auto it = numbers.begin(); it != numbers.end(); ++it) {
    // loop logic
}
```

## Assignments

- [x] Write a program that reverses an array of integers.
- [x] Write a program that finds the maximum and minimum elements in an array.