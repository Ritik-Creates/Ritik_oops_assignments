#include <iostream>
using namespace std;

class Test {
public:
    int x;

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {

    // Integer variable
    int *p = new int;
    *p = 10;
    cout << "Integer: " << *p << endl;
    delete p;

    // Float variable
    float *f = new float;
    *f = 5.5;
    cout << "Float: " << *f << endl;
    delete f;

    // Integer array
    int *arr = new int[3];
    arr[0] = 1; arr[1] = 2; arr[2] = 3;

    cout << "Integer Array: ";
    for(int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    cout << endl;
    delete[] arr;

    // Float array
    float *farr = new float[2];
    farr[0] = 1.1;
    farr[1] = 2.2;

    cout << "Float Array: ";
    for(int i = 0; i < 2; i++)
        cout << farr[i] << " ";
    cout << endl;
    delete[] farr;

    // Class object
    Test *obj = new Test;
    obj->x = 50;
    obj->display();
    delete obj;

    // Array of objects
    Test *objArr = new Test[2];
    objArr[0].x = 100;
    objArr[1].x = 200;

    objArr[0].display();
    objArr[1].display();

    delete[] objArr;

    return 0;
}