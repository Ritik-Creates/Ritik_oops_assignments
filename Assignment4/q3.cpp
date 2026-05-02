#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }

    // Destructor (no parameter, no return type)
    ~Demo() {
        cout << "Destructor called\n";
    }
};

int main() {
    Demo d1;
    return 0;
}