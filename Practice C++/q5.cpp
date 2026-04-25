#include <iostream>
using namespace std;

class Student {
    int roll;
    char name[20];
public:
    void getData() {
        cin >> roll >> name;
    }
    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    Student s[10];
    cout << "Enter details:\n";
    for (int i = 0; i < 10; i++)
        s[i].getData();

    cout << "\nRecords:\n";
    for (int i = 0; i < 10; i++)
        s[i].display();

    return 0;
}