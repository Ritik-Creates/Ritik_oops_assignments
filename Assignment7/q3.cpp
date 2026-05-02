#include <iostream>
#include <cmath>
using namespace std;

float area(float base, float height) {
    return 0.5 * base * height; 
}

float area(float side) {
    return (sqrt(3)/4) * side * side;
}

float area(float a, float b, float c) {
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c)); 
}

int main() {
    cout << "Right Triangle: " << area(10,5) << endl;
    cout << "Equilateral: " << area(6) << endl;
    cout << "Isosceles: " << area(5,5,6) << endl;
}