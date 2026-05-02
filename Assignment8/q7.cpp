#include <iostream>
using namespace std;

template <class T>
class Queue {
    int front, rear;
    T arr[100];

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(T x) {
        if(rear == -1) front = 0;
        arr[++rear] = x;
    }

    void dequeue() {
        if(front <= rear)
            front++;
    }

    void display() {
        for(int i = front; i <= rear; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    q.display();
}