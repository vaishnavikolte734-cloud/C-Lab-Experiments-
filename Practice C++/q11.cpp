#include <iostream>
using namespace std;

class Numbers
{
    int n;

public:
    void input()
    {
        cout << "Enter the value of n : ";
        cin >> n;
    }
    void print()
    {
        for (int i = 1; i <= n; i++)
            cout << i << " ";
    }
};

int main()
{
    Numbers num;
    num.input();
    num.print();
    return 0;
}