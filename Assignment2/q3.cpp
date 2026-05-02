#include <iostream>
using namespace std;

class Demo {
private:
    void showPrivate() {
        cout << "Private function called\n";
    }

public:
    void showPublic() {
        cout << "Public function\n";
        showPrivate(); // allowed
    }
};

int main() {
    Demo d;
    d.showPublic();
    return 0;
}