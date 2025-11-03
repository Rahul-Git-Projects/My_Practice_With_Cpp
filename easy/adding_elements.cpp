#include <iostream>

int main(void)
{
    int sum = 0, a[5] = {1, 2, 3, 4, 5};
    for (auto x : a)
    {
        sum += x;
    }

    std ::cout << "sum is " << sum;

    return 0;
}