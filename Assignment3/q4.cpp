#include <iostream>
using namespace std;

class A {
    int x;
public:
    A() { x = 100; }

    friend class B;  // B is friend class
};

class B {
public:
    void display(A obj) {
        cout << "Value of x: " << obj.x << endl;
    }
};

int main() {
    A objA;
    B objB;

    objB.display(objA);

    return 0;
}