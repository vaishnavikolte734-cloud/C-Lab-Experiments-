#include <iostream>
using namespace std;

class Book
{
    int bookID;
    string bookName;
    int available;

public:
    void input()
    {
        cout << "Enter bookID : ";
        cin >> bookID;

        cout << "Enter book name : ";
        cin >> bookName;

        cout << "Enter availablity (1=yes and 0 = no) : ";
        cin >> available;
    }

    void display()
    {
        cout << "Book ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;

        if (available == 1)
            cout << "Available: Yes" << endl;
        else
            cout << "Available: No" << endl;
    }
};

int main()
{
    Book b;
    b.input();
    b.display();
    return 0;
}