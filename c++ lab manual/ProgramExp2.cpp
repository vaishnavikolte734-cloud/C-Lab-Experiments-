#include <iostream>
using namespace std;

class HotelBill
{
private:
    int tableNo;
    string custName;
    string contact;
    int n; // number of items
    float totalAmount;

public:
    void getDetails()
    {
        cout << "Enter Table Number: ";
        cin >> tableNo;

        cin.ignore();
        cout << "Enter Customer Name: ";
        getline(cin, custName);

        cout << "Enter Customer Contact: ";
        getline(cin, contact);

        cout << "Enter number of items ordered: ";
        cin >> n;
    }

    void calculateBill()
    {
        totalAmount = 0;

        for (int i = 1; i <= n; i++)
        {
            string itemName;
            int quantity;
            float price;

            cout << "\nEnter name of item " << i << ": ";
            cin >> itemName;

            cout << "Enter quantity: ";
            cin >> quantity;

            cout << "Enter price per item: ";
            cin >> price;

            float itemTotal = quantity * price;
            totalAmount += itemTotal;

            cout << "Item Total: Rs. " << itemTotal << endl;
        }

        // Apply discount
        if (totalAmount > 2000)
        {
            cout << "\nDiscount Applied: 20%\n";
            totalAmount *= 0.80;
        }
        else if (totalAmount > 1000)
        {
            cout << "\nDiscount Applied: 10%\n";
            totalAmount *= 0.90;
        }
        else
        {
            cout << "\nNo Discount Applied\n";
        }
    }

    void displayBill()
    {
        cout << "\n===== HOTEL BILL =====\n";
        cout << "Table No: " << tableNo << endl;
        cout << "Customer Name: " << custName << endl;
        cout << "Contact: " << contact << endl;

        cout << "----------------------------------\n";
        cout << "Final Amount: Rs. " << totalAmount << endl;
        cout << "===============================\n";
    }
};

int main()
{
    HotelBill h;

    h.getDetails();
    h.calculateBill();
    h.displayBill();

    return 0;
}