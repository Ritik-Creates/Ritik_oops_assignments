#include <iostream>
using namespace std;

template <class T>
class Array {
    T arr[100];
    int n;

public:
    void input() {
        cout << "Enter size: ";
        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void display() {
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Array<int> obj;
    obj.input();
    obj.display();
}