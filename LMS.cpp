//this is for banderaws
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Book structure for array storage
struct Book {
    int id;
    string title;
    string author;
    string genre;
    bool isIssued = false;

    void display() const {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author
             << ", Genre: " << genre << ", Issued: " << (isIssued ? "Yes" : "No") << endl;
    }
};
//bellow this is basha code
//basha contribute 
// Library Member as a linked list node
class Member {
public:
    int id;
    string name;
    int borrowedBooks = 0;
    bool isActive = true;
    Member* next = nullptr;

    Member(int id, const string& name) : id(id), name(name) {}

    void display() const {
        cout << "ID: " << id << ", Name: " << name
             << ", Borrowed: " << borrowedBooks << ", Status: " << (isActive ? "Active" : "Inactive") << endl;
    }
};
//this is bashas
class Member {
public:
    int id;
    string name;
    int borrowedBooks = 0;
    bool isActive = true;
    Member* next = nullptr;

    Member(int id, const string& name) : id(id), name(name) {}

    void display() const {
        cout << "ID: " << id << ", Name: " << name
             << ", Borrowed: " << borrowedBooks << ", Status: " << (isActive ? "Active" : "Inactive") << endl;
    }
};
//this is from mikyas fikre
// Function to display the menu
void displayMenu() {
    cout << "\nLibrary Management System Menu:\n";
    cout << "1. Add Book\n";
    cout << "2. Search Book\n";
    cout << "3. Update Book\n";
    cout << "4. Delete Book\n";
    cout << "5. Add Member\n";
    cout << "6. Search Member\n";
    cout << "7. Update Member Status\n";
    cout << "8. Delete Member\n";
    cout << "9. Issue Book\n";
    cout << "10. Return Book\n";
    cout << "11. Save Books to File\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}
//this is from Tesfaye Seifu

// Library System
class Library {
private:
    static const int MAX_BOOKS = 100;
    Book books[MAX_BOOKS];
    int bookCount = 0;
    Member* membersHead = nullptr;

    // Helper function to convert string to lowercase
    string toLower(const string& str) const {
        string lowerStr = str;
        for (char& c : lowerStr) {
            if (c >= 'A' && c <= 'Z') {
                c += 32; // Convert to lowercase
            }
        }
        return lowerStr;
    }

public:
    // Add a book
    void addBook(int id, const string& title, const string& author, const string& genre) {
        if (bookCount < MAX_BOOKS) {
            books[bookCount++] = {id, title, author, genre, false};
            cout << "Book added successfully!\n";
        } else {
            cout << "Library is full!\n";
        }
    }

    // Search book by title (case-insensitive)
    void searchBook(const string& title) const {
        string lowerTitle = toLower(title);

        for (int i = 0; i < bookCount; i++) {
            string lowerBookTitle = toLower(books[i].title);

            if (lowerBookTitle == lowerTitle) {
                books[i].display();
                return;
            }
        }
        cout << "Book not found!\n";
    }

    // Update book details
    void updateBook(int id, const string& newTitle, const string& newAuthor, const string& newGenre) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].id == id) {
                books[i] = {id, newTitle, newAuthor, newGenre, books[i].isIssued};
                cout << "Book updated successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }

    // Delete book
    void deleteBook(int id) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].id == id) {
                books[i] = books[--bookCount]; // Replace with last book
                cout << "Book deleted successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }

