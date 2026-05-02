#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
    T a, b;

public:
    Arithmetic(T x, T y) {
        a = x;
        b = y;
    }

    void operations() {
        cout << "Add: " << a + b << endl;
        cout << "Sub: " << a - b << endl;
        cout << "Mul: " << a * b << endl;
        cout << "Div: " << a / b << endl;
    }
};

int main() {
    Arithmetic<int> obj(10, 5);
    obj.operations();
}