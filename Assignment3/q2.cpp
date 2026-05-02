#include <iostream>
using namespace std;

class B; // forward declaration

class A {
    int x;
public:
    A(int a) { x = a; }

    friend void swapValues(A &, B &);
};

class B {
    int y;
public:
    B(int b) { y = b; }

    friend void swapValues(A &, B &);
};

void swapValues(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A obj1(10);
    B obj2(20);

    swapValues(obj1, obj2);

    cout << "Swapped successfully" << endl;

    return 0;
}