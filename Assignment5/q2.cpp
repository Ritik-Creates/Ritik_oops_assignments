#include <iostream>
using namespace std;

class Base {
protected:
    int num;
};

class Derived : public Base {
public:
    void setValue(int n) {
        num = n;  
    }

    void display() {
        cout << "Value: " << num << endl;
    }
};

int main() {
    Derived d;
    d.setValue(10);
    d.display();
    return 0;
}