#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Hello\nWorld" << endl;
    cout << "Hello\tWorld" << endl;
    cout << "Helloo\b World" << endl;
    cout << setw(10) << "Hi" << endl;

    return 0;
}