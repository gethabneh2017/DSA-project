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
