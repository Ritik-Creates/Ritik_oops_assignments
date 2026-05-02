#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title, author, ISBN;

    Book() {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }

    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library {
    Book books[100];
    int count = 0;

public:
    bool addNewBook(string title, string author, string ISBN) {
        books[count++] = Book(title, author, ISBN);
        return true;
    }

    bool removeBooks(string ISBN) {
        for (int i = 0; i < count; i++) {
            if (books[i].ISBN == ISBN) {
                for (int j = i; j < count - 1; j++)
                    books[j] = books[j + 1];
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " | "
                 << books[i].author << " | "
                 << books[i].ISBN << endl;
        }
    }
};

int main() {
    Book b1("A","AA","101"), b2("B","BB","102");

    Book b3 = Book("C","CC","103");

    Library lib;
    lib.addNewBook("D","DD","104");
    lib.addNewBook("E","EE","105");

    lib.displayDetails();

    return 0;
}