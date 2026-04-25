#include <iostream>
using namespace std;

class Bill
{
    float units, amount;

public:
    void input()
    {
        cout << "Enter units: ";
        cin >> units;
    }
    void calculate()
    {
        amount = units * 5;
        amount = amount - (amount * 0.02);
    }
    void display()
    {
        cout << "Final Bill = " << amount;
    }
};

int main()
{
    Bill b;
    b.input();
    b.calculate();
    b.display();
    return 0;
}