#include <iostream>
using namespace std;

struct Student {
    string name, degree, hostel;
    int rollNo;
    float cgpa;

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

    void updateDetails() {
        cout << "Update Name: ";
        cin >> name;
        cout << "Update Degree: ";
        cin >> degree;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.displayDetails();
    s.updateCGPA();
    s.displayDetails();
    return 0;
}