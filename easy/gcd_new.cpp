#include <iostream>

using namespace std;

int main(void)
{
    int a, b, gcd;

    cout << "Enter any two numbers: ";
    cin >> a >> b;

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    gcd = a;
    cout << "Gcd of two numbers is " << gcd;

    return 0;
}