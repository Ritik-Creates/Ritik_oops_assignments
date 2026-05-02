#include <iostream>
using namespace std;

class Person {
protected:
    string name;
};

class Staff : virtual public Person {
protected:
    int emp_id;
};

class Student : virtual public Person {
protected:
    int stu_id;
};

class TeachingAssistant : public Staff, public Student {
public:
    void setData() {
        name = "Rahul";
        emp_id = 101;
        stu_id = 202;
    }

    void display() {
        cout << name << endl;
        cout << emp_id << endl;
        cout << stu_id << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.setData();
    ta.display();
}