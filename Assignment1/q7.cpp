#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swap: a = " << a << ", b = " << b;

    return 0;
}