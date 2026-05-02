#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream dest("dest.txt");

    char ch;
    while(source.get(ch)) {
        dest.put(ch);
    }

    cout << "File copied successfully!";
    source.close();
    dest.close();

    return 0;
}