#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    Fraction a(1, 2);
    Fraction b(3, 4);

    cout << "a = " << a << ", b = " << b << endl;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;

    cout << "a + 2 = " << (a + 2) << endl;
    cout << "3 - b = " << (3 - b) << endl;
    cout << "a * 5 = " << (a * 5) << endl;
    cout << "10 / b = " << (10 / b) << endl;

    return 0;
}
