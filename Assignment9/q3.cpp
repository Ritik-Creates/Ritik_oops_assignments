#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    char name[20];
public:
    void input() {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }

    void display() {
        cout << "Roll: " << roll << " Name: " << name << endl;
    }
};

int main() {
    Student s;
    ofstream fout("student.dat", ios::binary);

    s.input();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s, sizeof(s));
    s.display();

    fin.close();
    return 0;
}