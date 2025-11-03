#include <iostream>

using namespace std;

int main(void)
{
    int a, b, gcd = 1;
    cout << "Enter any two numbers a and b: ";
    cin >> a >> b;
    if (a == 0 || b == 0)
    {
        gcd = a + b;
    }
    if (a >= b)
    {
        for (int i = 1; i <= b; i++)
        {
            if (b % i == 0 && a % i == 0)
            {
                if (i > gcd)
                {
                    gcd = i;
                }
            }
        }
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                if (i > gcd)
                    gcd = i;
            }
        }
    }

    cout << "gcd is " << gcd;

    return 0;
}