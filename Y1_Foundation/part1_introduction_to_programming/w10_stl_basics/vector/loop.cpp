#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec{1, 2, 3, 4, 5};

    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}