#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("hello.txt", ios::out | ios::in);

    string str = "HelloWorld";

    for(int i = 0; i < str.length(); i++) {
        file.put(str[i]);
        cout << "Position: " << file.tellp() << endl;
    }

    file.seekp(5);
    file << "C++";

    file.close();

    ifstream fin("hello.txt");
    string result;
    fin >> result;

    cout << "Modified: " << result;

    fin.close();
    return 0;
}