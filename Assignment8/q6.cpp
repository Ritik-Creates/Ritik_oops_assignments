#include <iostream>
using namespace std;

template <class T>
class Stack {
    int top;
    T arr[100];

public:
    Stack() { top = -1; }

    void push(T x) {
        arr[++top] = x;
    }

    void pop() {
        if(top >= 0)
            top--;
    }

    void display() {
        for(int i = top; i >= 0; i--)
            cout << arr[i] << " ";
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    s.display();
}