#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("AZ.txt");
    for(char ch = 'A'; ch <= 'Z'; ch++)
        file << ch;
    file.close();

    ifstream fin("AZ.txt");
    fin.seekg(9); 

    char ch;
    fin.get(ch);
    cout << "10th character: " << ch;

    fin.close();
    return 0;
}