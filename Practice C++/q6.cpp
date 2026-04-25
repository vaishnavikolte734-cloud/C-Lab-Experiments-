#include <iostream>
using namespace std;

class Prime
{
    int n;

public:
    void input()
    {
        cout << "Enter number : " << endl;
        cin >> n;
    }

    void check()
    {
        if (n <= 1)
        {
            cout << "Not Prime";
            return;
        }

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << "Not Prime";
                return;
            }
        }

        cout << "Prime";
    }
};

int main()
{
    Prime p;
    p.input();
    p.check();
    return 0;
}