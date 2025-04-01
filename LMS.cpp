
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
