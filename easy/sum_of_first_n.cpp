#include <iostream>

using namespace std;

int main(void)
{
    int sum = 0, n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum is " << sum;
    return 0;
}