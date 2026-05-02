#include <iostream>
using namespace std;

class Array {
    int a[5];
public:
    int& operator[](int i) {
        if(i<0 || i>=5) {
            cout << "Index out of bounds\n";
            exit(0);
        }
        return a[i];
    }
};

int main() {
    Array arr;
    arr[0]=10;
    arr[4]=20;
    cout<<arr[0]<<" "<<arr[4];
}