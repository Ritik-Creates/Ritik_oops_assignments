#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) { value = v; }

    Number add(Number &obj) {
        return Number(value + obj.value);
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1(15), n2(25);

    Number result = n1.add(n2); // pass by reference
    result.display();

    return 0;
}