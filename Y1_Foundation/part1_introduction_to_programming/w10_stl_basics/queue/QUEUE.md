# Queues

## Initalization

```cpp
#include <queue>

std::queue<int> q1;           // Empty queue of integers
std::queue<int> q2(q1);       // Copy q1 into q2
std::queue<int> q3(std::move(q2));  // Move q2's contents to q3
```

## Adding Elements

- `push()`: Add an element to the back of the queue.

```cpp
std::queue<int> q;
q.push(1);  // queue: [1]
q.push(2);  // queue: [1, 2]
q.push(3);  // queue: [1, 2, 3]
```

## Removing Elements

- `pop()`: Remove the front element from the queue.

```cpp
q.pop();  // queue: [2, 3] (removes 1 from the queue)
```

## Accessing Elements

- `front()`: Access the front element of the queue.
- `back()`: Access the back element of the queue.

```cpp
int front_element = q.front();  // front element: 2
int back_element = q.back();    // back element: 3
```

## Size and Empty

- `size()`: Get the number of elements in the queue.
- `empty()`: Check if the queue is empty.

```cpp
size_t size = q.size();  // size is 2 if queue has [2, 3]
bool is_empty = q.empty();    // is the queue empty: false
```
