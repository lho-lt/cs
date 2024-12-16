# Vectors

## Initalization

```cpp
#include <vector>

std::vector<int> v1; // Empty vector
std::vector<int> v2(5); // Vector with 5 elements, all initialized to 0
std::vector<int> v3(5, 10); // Vector with 5 elements, all initialized to 10
std::vector<int> v4 = {1, 2, 3, 4, 5}; // Using initializer list
std::vector v5 = {1, 2, 3, 4, 5}; // Infer type from initializer list
```

## Adding Elements

- `push_back()`: Add an element to the end of the vector.
- `insert()`: Insert an element at a specific position in the vector.
- `emplace_back()`: Add an element to the end of the vector using placement new.

```cpp
v1.push_back(10); // Add 10 to the end of the vector
v1.emplace_back(20); // Add 20 to the end of the vector using placement new
v1.insert(v1.begin() + 2, 30); // Insert 30 at index 2
```

## Accessing Elements

- `at()`: Performs bounds checking and throws an exception if out of range.
- `operator[]`: Does not perform bounds checking.
- `front()`: Access the first element in the vector.
- `back()`: Access the last element in the vector.
  
```cpp
v1.at(1); // Access the second element in the vector
v1[2]; // Access the third element in the vector
v1.front(); // Access the first element in the vector
v1.back(); // Access the last element in the vector
```

## Removing Elements

- `pop_back()`: Remove the last element.
- `erase()`: Remove an element at a specific position.
- `clear()`: Remove all elements.

```cpp
v1.pop_back(); // Remove the last element
v1.erase(v1.begin() + 2); // Remove the element at index 2
v1.clear(); // Remove all elements
```

## Iterating Over Elements

- Range-based for loop.
- Iterator-based for loop.
  
```cpp
for (int x : v1) {
    // Do something with x
}
for (auto it = v1.begin(); it != v1.end(); ++it) {
    // Do something with *it
}
```

## Resizing and Capacity

- `resize()`: Change the size of the vector.
- `capacity()`: Get the current capacity of the vector.
- `reserve()`: Reserve space for a specific number of elements.

```cpp
v1.resize(10); // Resize the vector to 10 elements
size_t capacity = v1.capacity(); // Get the current capacity of the vector
v1.reserve(20); // Reserve space for 20 elements
```
