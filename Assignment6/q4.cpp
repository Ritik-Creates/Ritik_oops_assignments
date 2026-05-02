#include <iostream>
using namespace std;

class B; 

class A {
    int x;
public:
    A(int x) { this->x = x; }

    friend int add(A, B);
};

class B {
    int y;
public:
    B(int y) { this->y = y; }

    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A obj1(10);
    B obj2(20);

    cout << "Sum: " << add(obj1, obj2);

    return 0;
}