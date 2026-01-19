#include <iostream>

using namespace std;

int max(int x, int y, int z)
{
    int array[3] = {x, y, z};
    int m = 0;
    for (int x : array)
    {
        if (x > m)
        {
            m = x;
        }
    }
    return m;
}

int main(void)
{
    cout << max(2,9, 5);
    return 0;
}