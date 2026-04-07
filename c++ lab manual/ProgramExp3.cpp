#include <iostream>
using namespace std;

class student
{
private:
    int rollNo;
    string name;
    string div;
    float marks[10];
    float total;
    float percentage;
    int n;

public:
    void getdata()
    {

        cout << "\nEnter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "\nEnter name: ";
        getline(cin, name);

        cout << "\nEnter Division: ";
        getline(cin, div);

        cout << "Enter number of subjects: ";
        cin >> n;

        total = 0;

        // Loop to accept marks of each subject
        for (int i = 0; i < n; i++)
        {
            cout << "Enter marks of subject " << i + 1 << ": ";
            cin >> marks[i];
            total = total + marks[i];
        }
    }

    void calculatePercentage()
    {
        percentage = total / n;
    }

    void display()
    {
        cout << "\nRoll Number : " << rollNo;
        cout << "\nName: " << name;
        cout << "\nDivision: " << div;
        cout << "\nTotal Marks : " << total;
        cout << "\nPercentage : " << percentage << "%\n";
    }
};

int main()
{
    int stud;

    cout << "Enter number of students: ";
    cin >> stud;

    student s[10];
    for (int i = 0; i < stud; i++)
    {
        cout << "\n--- Student " << i + 1 << " ---";
        s[i].getdata();
        s[i].calculatePercentage();
        s[i].display();
    }

   

    return 0;
}
