#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // Constructor with default arguments
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor called\n";
    }
};

int main() {
    Rectangle r[3] = {
        Rectangle(),      // 0,0
        Rectangle(5),     // 5,0
        Rectangle(4, 6)   // 4,6
    };

    for(int i = 0; i < 3; i++) {
        cout << "Area of object " << i+1 << ": " << r[i].area() << endl;
    }

    return 0;
}