#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("AZ.txt");

    file.seekg(0, ios::end);
    cout << "File Size: " << file.tellg() << " bytes";

    file.close();
    return 0;
}