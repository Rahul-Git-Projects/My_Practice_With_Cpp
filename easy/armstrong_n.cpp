#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n, sum = 0, temp;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp != 0)
    {
        sum += pow(temp % 10, 3);
        temp /= 10;
    }

    if (sum == n)
    {
        cout << "Armstrong number";
    }
    else
        cout << "Not an armstrong number";

    return 0;
}