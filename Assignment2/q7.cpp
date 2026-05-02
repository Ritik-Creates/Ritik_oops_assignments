#include <iostream>
using namespace std;

namespace A {
    int value = 10;
    void display() {
        cout << "Namespace A value: " << value << endl;
    }
}

namespace B {
    int value = 20;
    void display() {
        cout << "Namespace B value: " << value << endl;
    }
}

int main() {
    A::display();
    B::display();

    cout << "A value = " << A::value << endl;
    cout << "B value = " << B::value << endl;

    return 0;
}