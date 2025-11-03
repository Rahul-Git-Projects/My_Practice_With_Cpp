#include <iostream>

using namespace std;

int main(void)
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfeect number";

    return 0;
}
