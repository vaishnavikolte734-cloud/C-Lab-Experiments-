#include <iostream>
using namespace std;

class Palindrome
{
    int n;

public:
    void input()
    {
        cout << "Enter the value of n : ";
        cin >> n;
    }

    inline void check()
    {
        int temp = n, rev = 0;
        while (n > 0)
        {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        if (temp == rev)
            cout << "Palindrome";
        else
            cout << "Not Palindrome";
    }
};

int main()
{
    Palindrome p;
    p.input();
    p.check();
    return 0;
}