#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    void setData(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect[3];

    rect[0].setData(2, 3);
    rect[1].setData(4, 5);
    rect[2].setData(6, 7);

    for(int i = 0; i < 3; i++) {
        cout << "Area of rectangle " << i+1 << " = " << rect[i].area() << endl;
    }

    return 0;
}