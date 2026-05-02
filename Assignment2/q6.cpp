#include <iostream>
using namespace std;

int x = 100; // global

class Test {
public:
    static int count;
    void show();
};

int Test::count = 10; // static variable

void Test::show() { // function defined outside class
    int x = 50; // local
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl; // access global
    cout << "Static count = " << Test::count << endl;
}

int main() {
    Test t;
    t.show();

    std::cout << "Using std namespace with scope resolution\n";

    return 0;
}