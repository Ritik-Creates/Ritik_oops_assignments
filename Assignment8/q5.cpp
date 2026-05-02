#include <iostream>
using namespace std;

template <class T>
void process(T a) {
    cout << "Single: " << a << endl;
}

template <class T>
void process(T a, T b) {
    cout << "Same Type: " << a << " " << b << endl;
}

template <class T, class U>
void process(T a, U b) {
    cout << "Different Types: " << a << " " << b << endl;
}

int main() {
    process(10);
    process(10, 20);
    process(10, 5.5);
}