#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title, author, ISBN;
};

class Library {
    Book books[100];
    int count = 0;

public:
    bool addNewBook(string &title, string &author, string &ISBN) {
        if (count >= 100) return false;

        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;
        return true;
    }

    bool removeBooks(string &ISBN);

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " | "
                 << books[i].author << " | "
                 << books[i].ISBN << endl;
        }
    }
};

bool Library::removeBooks(string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

int main() {
    Library lib;

    string t, a, i;

    t="Book1"; a="Author1"; i="111"; lib.addNewBook(t,a,i);
    t="Book2"; a="Author2"; i="222"; lib.addNewBook(t,a,i);
    t="Book3"; a="Author3"; i="333"; lib.addNewBook(t,a,i);
    t="Book4"; a="Author4"; i="444"; lib.addNewBook(t,a,i);
    t="Book5"; a="Author5"; i="555"; lib.addNewBook(t,a,i);

    cout << "\nBefore Removal:\n";
    lib.displayDetails();

    string removeISBN = "333";
    lib.removeBooks(removeISBN);

    cout << "\nAfter Removal:\n";
    lib.displayDetails();

    return 0;
}