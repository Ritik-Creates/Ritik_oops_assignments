#include <iostream>
using namespace std;

class Student {
private:
    string name, degree, hostel;
    int rollNo;
    float cgpa;

    void secretFunction() {
        cout << "This is private!\n";
    }

public:
    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayDetails() {
        secretFunction(); // calling private function
        cout << name << " " << rollNo << " " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.displayDetails();
    return 0;
}