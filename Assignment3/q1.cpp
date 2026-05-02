#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    void setData(int roll) {
        this->roll = roll;   // using this pointer
    }

    void display() {
        cout << "Roll No: " << roll << endl;
    }
};

int main() {
    Student s1;

    // Pointer to object
    Student *ptr = &s1;

    // Using arrow operator
    ptr->setData(101);
    ptr->display();

    // Using dot operator
    s1.display();

    return 0;
}