#include <iostream>
using namespace std;

class Swap {
    int a, b;
public:
    void input() {
        cout<<"Enter two values : "<<endl;
        cin >> a >> b;
    }
    void swapNum() {
        int temp = a;
        a = b;
        b = temp;
    }
    void display() {
        cout << "After Swap: " << a << " " << b;
    }
};

int main() {
    Swap s;
    s.input();
    s.swapNum();
    s.display();
    return 0;
}