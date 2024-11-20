# Pointers and Memory Management

## Pointers

A pointer is a variable that stores the memory address of another variable. This allows direct manipulation of memory locations, providing more control over the program's memory usage.

### Types of Pointers

1. **Basic Pointer**

   This is the most basic type of pointer, used to store the address of a specific data type variable.

    ```cpp
    int x = 5;
    int *ptr = &x; // ptr stores the memory address of x
    ```

2. **Null Pointer**

    A null pointer is a pointer that does not point to any valid memory location. It's often used for initialization or to check whether a pointer is valid.

    ```cpp
    int *ptr = nullptr; // ptr is not pointing to any valid memory
    ```

3. **Void Pointer**

    This type of pointer can hold the address of any data type.

    ```cpp
    void *ptr;
    int a = 10;
    ptr = &a;
    ```

4. **Pointer to Pointer**

    This type of pointer points to a variable that holds another pointer, not a value.

    ```cpp
    int x = 5;
    int *p = &x;    // pointer to x
    int **pp = &p;  // pointer to pointer p
    ```

5. **Function Pointer**

    A function pointer points ot the address of a function. It allows to call a function indirectly.

    ```cpp
    void greet() {
        std::cout << "Hello, World!" << std::endl;
    }

    void (*func_ptr)() = greet; 
    func_ptr();
    ```

### Dereferencing Pointers

Dereferencing a pointer means accessing the value stored at the memory address the pointer is pointing to. You can dereference a pointer using the `*` operator.

```cpp
int x = 10;
int *ptr = &x;
std::cout << *ptr; // Prints 10
```

### Pointer Arithmetic

Pointer arithmetic allows to manipulate the memory address stored in pointers. By adding or substracting integers from pointers memory addresses can be altered.

```cpp
int arr[] = {10, 20, 30};
int *ptr = arr; // Points to the first element

ptr++;  // Now it points to the second element
std::cout << *ptr; // Prints 20
```

### Dynamic Memory Allocation

1. `new` Operator:

    The `new` operator allocates memory on the heap and returns a pointer to the allocated memory.

    ```cpp
    int *p = new int;   // Allocates memory for one integer
    *p = 10;    // Assign value to the allocated memory
    ```

2. `new[]` for Array Allocation;

    ```cpp
    int *arr = new int[5];  // Allocates memory for an array of 5 integers
    arr[0] = 1;
    arr[1] = 2;
    // ...
    ```

3. `delete` Operator:

    The `delete` operator frees memory that was previously allocated with `new`

    ```cpp
    delete p; 
    ```

4. `delete[]` for Arrays:

    ```cpp
    delete[] arr;
    ```

The new operator allocates memory on the heap, and it's important to always free dynamically allocated memory using delete to prevent memory leaks.

## Assignments

- [x] Write a program that swaps two numbers using pointers.
- [x] Implement a program that dynamically allocates an array, takes user input, and then releases the memory.
