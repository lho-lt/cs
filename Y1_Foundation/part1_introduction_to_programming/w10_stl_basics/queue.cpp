#include <iostream>
#include <queue>

int main() {
    std::queue<int> queue;

    queue.push(1);
    queue.push(2);
    queue.push(3);

    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        queue.pop();
    }
    std::cout << std::endl;
}