#include <iostream>
#include <fstream>
using namespace std;

void countAlphabets() {
    ifstream file("NOTES.TXT");
    char ch;
    int count = 0;

    while(file.get(ch)) {
        if(isalpha(ch))
            count++;
    }

    cout << "Total Alphabets: " << count;
    file.close();
}

int main() {
    countAlphabets();
    return 0;
}