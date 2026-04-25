#include <iostream>
using namespace std;

class Leap
{
    int year;

public:
    void input()
    {
        cout << "Enter the value of years : ";
        cin >> year;
    }
    void check()
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            cout << "Leap Year";
        else
            cout << "Not Leap Year";
    }
};

int main()
{
    Leap l;
    l.input();
    l.check();
    return 0;
}