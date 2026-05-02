#include <iostream>
using namespace std;

class B;

class A {
    int a;
public:
    A(int x) { a = x; }

    friend int add(A, B);
};

class B {
    int b;
public:
    B(int y) { b = y; }

    friend int add(A, B);
};

int add(A obj1, B obj2) {
    return obj1.a + obj2.b;
}

int main() {
    A obj1(5);
    B obj2(7);

    cout << "Sum = " << add(obj1, obj2);

    return 0;
}