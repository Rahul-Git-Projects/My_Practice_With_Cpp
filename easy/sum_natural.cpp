#include <iostream>

using namespace std;
int main(void)
{
    int n, result;
    cout << "Enter a number: ";
    cin >> n;

    result = n * (n + 1) / 2;

    cout << "The sum of " << n << " natural numbers is " << result;

    return 0;
}