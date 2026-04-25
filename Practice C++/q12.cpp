#include <iostream>
using namespace std;

class Medical
{
    string patientName;
    string contactNo;
    float billAmount;

public:
    Medical(string name, string contact, float bill)
    {
        patientName = name;
        contactNo = contact;
        billAmount = bill;
    }

    void display()
    {
        cout << "\n----- Medical Bill Receipt -----\n";
        cout << "Patient Name  : " << patientName << endl;
        cout << "Contact No.   : " << contactNo << endl;
        cout << "Bill Amount   : Rs. " << billAmount << endl;
        cout << "--------------------------------\n";
    }
};

int main()
{
    string name, contact;
    float bill;

    cout << "Enter Patient Name: ";
    cin >> name;

    cout << "Enter Contact Number: ";
    cin >> contact;

    cout << "Enter Bill Amount: ";
    cin >> bill;

    Medical m(name, contact, bill);

    m.display();

    return 0;
}