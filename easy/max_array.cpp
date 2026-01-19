#include <iostream>

int main(void)
{
    int a[6] = {32, 56, 47, 87, 23, 54}, max = 0;

    for (int x : a)
    {
        if (x > max)
        {
            max = x;
        }
    }

    std ::cout << "Max value is " << max;
    return 0;
}
