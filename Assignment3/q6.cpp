#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num = 3;

    cout << "Cube = " << cube(num);

    return 0;
}