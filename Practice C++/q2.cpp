#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Not Prime";
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
        }
    }

    cout << "Prime";
    return 0;
}