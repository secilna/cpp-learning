
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    bool isAvailable;

public:
    Book(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
        isAvailable = true;
    }

    string getTitle() const {
        return title;
    }

    bool getAvailability() const {
        return isAvailable;
    }

    void borrow() {
        isAvailable = false;
    }

    void returnBook() {
        isAvailable = true;
    }

    void display() const {
        cout << title << " by " << author;
        cout << " (" << year << ") - ";

        if (isAvailable) {
            cout << "Available";
        } else {
            cout << "Not Available";
        }

        cout << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void listBooks() const {
        cout << "\n--- Library Books ---\n";

        if (books.empty()) {
            cout << "The library is empty.\n";
            return;
        }

        for (size_t i = 0; i < books.size(); i++) {
            cout << i + 1 << ". ";
            books[i].display();
        }
    }

    void borrowBook(const string& title) {
        for (size_t i = 0; i < books.size(); i++) {
            Book& book = books[i];

            if (book.getTitle() == title) {
                if (book.getAvailability()) {
                    book.borrow();
                    cout << "Book borrowed successfully!\n";
                } else {
                    cout << "Book is already borrowed!\n";
                }
                return;
            }
        }

        cout << "Book not found!\n";
    }

    void returnBook(const string& title) {
        for (size_t i = 0; i < books.size(); i++) {
            Book& book = books[i];

            if (book.getTitle() == title) {
                if (!book.getAvailability()) {
                    book.returnBook();
                    cout << "Book returned successfully!\n";
                } else {
                    cout << "Book was not borrowed!\n";
                }
                return;
            }
        }

        cout << "Book not found!\n";
    }
};

int main() {
    Library lib;

    lib.addBook(Book("1984", "George Orwell", 1949));
    lib.addBook(Book("The Hobbit", "J.R.R. Tolkien", 1937));
    lib.addBook(Book("Clean Code", "Robert C. Martin", 2008));

    lib.listBooks();

    cout << "\nBorrowing 1984...\n";
    lib.borrowBook("1984");

    lib.listBooks();

    cout << "\nReturning 1984...\n";
    lib.returnBook("1984");

    lib.listBooks();

    return 0;
}
