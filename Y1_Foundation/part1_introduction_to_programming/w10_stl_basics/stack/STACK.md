# Stacks

## Initalization

```cpp
#include <stack>

std::stack<int> s1; // Empty stack of integers
std::stack<int> s2(s1); // Stack s2 is a copy of s1
std::stack<int> s3(std::move(s2)); // Stack s3 takes ownership of s2
```

## Adding Elements

- `push()`: Add an element to the top of the stack.

```cpp
std::stack<int> s;
s.push(1);  // stack: [1]
s.push(2);  // stack: [1, 2]
s.push(3);  // stack: [1, 2, 3]
```

## Removing Elements

- `pop()`: Remove the top element from the stack.

```cpp
s.pop();  // stack: [1, 2] (removes 3 from the stack)
```

## Accessing the Top Element

- `top()`: Returns a reference to the top element of the stack.
  
```cpp
int topElement = s.top();  // topElement is now 2 (the top of the stack)
```

## Checking if the Stack is Empty

- `empty()`: Returns true if the stack is empty, false otherwise.

```cpp
bool isEmpty = s.empty();  // true if empty, false otherwise
```

## Size of the Stack

- `size()`: Returns the number of elements in the stack.
  
```cpp
size_t size = s.size();  // size is 2 if stack has [1, 2]
```
