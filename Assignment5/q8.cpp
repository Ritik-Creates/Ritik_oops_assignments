#include <iostream>
using namespace std;

class LibraryUser {
protected:
    string name;
    int id;
};

class Student : public LibraryUser {
    int grade;
public:
    void setStudent(string n, int i, int g) {
        name = n; id = i; grade = g;
    }
    void display() {
        cout << name << " " << id << " Grade: " << grade << endl;
    }
};

class Teacher : public LibraryUser {
    string dept;
public:
    void setTeacher(string n, int i, string d) {
        name = n; id = i; dept = d;
    }
    void display() {
        cout << name << " " << id << " Dept: " << dept << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.setStudent("Aman", 1, 10);
    t.setTeacher("Dr. Singh", 2, "CS");

    s.display();
    t.display();
}