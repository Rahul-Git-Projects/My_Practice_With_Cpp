#include <iostream>

using namespace std;

int main(void)
{
    int n, res = 1;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }

    cout << "factorial of your number is : " << res;
    return 0;
}