#include <iostream>

using namespace std;

int main(void)
{
    int n, i;
    cout << " Enter a number: ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "Not a prime";
        return 0;
    }
    if (n == 2 || n == 3)
    {
        cout << "Prime";
        return 0;
    }
    if (n > 3)
    {
        for (i = 3; i < n; i += 2)
        {
            if (n % i == 0)
            {
                cout << "Not a prime";
                break;
            }
            if (n - 1 == i || n - 2 == i)
                cout << "Prime";
        }
    }

    return 0;
}