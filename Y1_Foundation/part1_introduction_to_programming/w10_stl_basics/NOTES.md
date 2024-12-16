# Introduction to Standard Template Library (STL)

## What is the Standard Template Library (STL)?

The Standard Template Library (STL) is a collection of template classes and functions that provide common data structures and algorithms for working with containers and iterators in C++.

- Containers: Data structures that store objects.
- Algorithms: Functions for performing operations on containers.
- Iterators: Objects that allow traversal of container elements.
- Function Objects: Objects that can be called as functions.

## Why is the Standard Template Library (STL) important?

The STL provides a standardized way to work with containers and iterators in C++, which makes it easier to write generic code that can be reused across different data structures.

## Common Data Structures

### `std::vector`

A vector is a dynamic array that can grow or shrink in size.

**Key Features:**

- Dynamic size: The vector can grow or shrink in size as needed.
- Random access: Elements can be accessed using indices.
- Contiguous storage: Elements are stored contiguously in memory.
- Memory Management: The vector handles memory management internally.
- Insertion and deletion: Elements can be inserted or deleted at any position.
- Performance: Vectors are generally efficient for accessing elements and adding/removing elements at the end. However, inserting or removing elements from the middle or front can be less efficient due to the need to shift elements.

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // Adding elements
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Accessing elements
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### `std::stack`

A stack is a container that stores elements in a last-in-first-out (LIFO) manner.

**Key Features:**

- LIFO: The last element added is the first one to be removed.
- Limited access: Only allows access to the top element.
  
```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> stk;

    // Adding elements
    stk.push(1);
    stk.push(2);
    stk.push(3);

    // Accessing and removing elements
    while (!stk.empty()) {
        std::cout << stk.top() << " "; // Access top element
        stk.pop(); // Remove top element
    }
    std::cout << std::endl;

    return 0;
}
```

### `std::queue`

A queue is a container that stores elements in a first-in-first-out (FIFO) manner.

**Key Features:**

- FIFO: The first element added is the first one to be removed.
- Limited access: Only allows access to the front element.
  
```cpp
#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Adding elements
    q.push(1);
    q.push(2);
    q.push(3);

    // Accessing and removing elements
    while (!q.empty()) {
        std::cout << q.front() << " "; // Access front element
        q.pop(); // Remove front element
    }
    std::cout << std::endl;

    return 0;
}
```

## Algorithms

STL provides a variety of algorithms that can be used with containers. Here are two commonly used algorithms: `sort()` and `find()`.

### `sort()`

The `sort()` algorithm sorts a container in ascending order.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 3, 8, 1, 2};

    // Sorting the vector
    std::sort(vec.begin(), vec.end());

    // Printing the sorted vector
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### `find()`

The `find()` algorithm searches for an element in a container.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 3, 8, 1, 2};

    // Finding an element
    int value_to_find = 3;
    auto it = std::find(vec.begin(), vec.end(), value_to_find);

    if (it != vec.end()) {
        std::cout << "Element " << value_to_find << " found at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Element " << value_to_find << " not found." << std::endl;
    }

    return 0;
}
```
