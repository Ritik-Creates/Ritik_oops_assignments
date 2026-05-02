#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make, model;
    int year;
};

class Truck : public Vehicle {
protected:
    int load_capacity;
};

class RefrigeratedTruck : public Truck {
    int temperature;
public:
    void setData() {
        make = "Tata"; model = "X1"; year = 2022;
        load_capacity = 1000;
        temperature = -5;
    }

    void display() {
        cout << make << " " << model << " " << year << endl;
        cout << "Load: " << load_capacity << endl;
        cout << "Temp: " << temperature << endl;
    }
};

int main() {
    RefrigeratedTruck r;
    r.setData();
    r.display();
}