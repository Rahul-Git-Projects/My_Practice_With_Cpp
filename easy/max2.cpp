#include <iostream>

using namespace std;

int max(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main(void)
{
    cout << max(3, 9, 4);
    return 0;
}