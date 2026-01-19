#include <iostream>

using namespace std;

int main(void)
{
    int a[5] = {1, 2, 0, -100, 5}, min = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    cout << "minimum value is " << min;

    return 0;
}