#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B (Single Inheritance)" << endl;
    }
};

class C : public B {
public:
    void showC() {
        cout << "Class C (Multilevel Inheritance)" << endl;
    }
};

class D : public A {
public:
    void showD() {
        cout << "Class D (Hierarchical Inheritance)" << endl;
    }
};

class E {
public:
    void showE() {
        cout << "Class E" << endl;
    }
};


class F : public B, public E {
public:
    void showF() {
        cout << "Class F (Multiple + Hybrid Inheritance)" << endl;
    }
};

int main() {
    cout << " Multilevel Inheritance" << endl;
    C obj1;
    obj1.showA();
    obj1.showB();
    obj1.showC();

    cout << "\nHierarchical Inheritance " << endl;
    D obj2;
    obj2.showA();
    obj2.showD();

    cout << "\n Multiple + Hybrid Inheritance" << endl;
    F obj3;
    obj3.showA();  
    obj3.showB();  
    obj3.showE();   
    obj3.showF();

    return 0;
}