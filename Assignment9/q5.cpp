#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    cout << "Length: " << strlen(str) << endl;

    ofstream fout("string.txt");
    fout << str;
    fout.close();

    ifstream fin("string.txt");
    cout << "From File: ";
    fin.getline(str, 100);
    cout << str;

    fin.close();
    return 0;
}