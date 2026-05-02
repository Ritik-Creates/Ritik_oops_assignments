#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
};

class PublicDerived : public Base {};
class ProtectedDerived : protected Base {};
class PrivateDerived : private Base {};

int main() {
    PublicDerived p;
    cout << p.x << endl;  // works

    // ProtectedDerived pr;
    // cout << pr.x;  not accessible

    // PrivateDerived pv;
    // cout << pv.x;  not accessible

    return 0;
}