#include <iostream>
#include <string>
using namespace std;

class Account {
    const long accNo;
    long transactionID;
    string type;
    double balance;

    static long counter;

public:
    Account(long acc, double bal) : accNo(acc), balance(bal) {}

    long depositAmount(const long to, const long from, const double amount) {
        if (to == accNo) {
            balance += amount;
            type = "Credit";
            transactionID = ++counter;
        }
        return transactionID;
    }

    long creditAmount(const long to, const long from, const double amount) {
        if (from == accNo) {
            balance -= amount;
            type = "Debit";
            transactionID = ++counter;
        }
        return transactionID;
    }

    void displayDetails() const {
        cout << "AccNo: " << accNo
             << " Balance: " << balance
             << " Last Txn: " << type
             << endl;
    }
};

long Account::counter = 0;

int main() {
    Account a1(1,1000), a2(2,2000);

    a1.depositAmount(1,2,500);
    a2.creditAmount(1,2,300);

    a1.displayDetails();
    a2.displayDetails();

    return 0;
}