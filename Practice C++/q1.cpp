#include <iostream>
using namespace std;

float triangleArea(float b, float h) {
    return 0.5 * b * h;
}

float circleArea(float r) {
    return 3.14 * r * r;
}

int main() {
    float b, h, r;
    cout << "Enter base & height: ";
    cin >> b >> h;
    cout << "Triangle Area = " << triangleArea(b, h) << endl;

    cout << "Enter radius: ";
    cin >> r;
    cout << "Circle Area = " << circleArea(r);

    return 0;
}
