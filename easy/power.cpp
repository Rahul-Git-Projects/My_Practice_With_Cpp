#include <iostream>

using namespace std;

int power(float x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}

int main(void)
{
    cout << power(5,4);
    return 0;
}