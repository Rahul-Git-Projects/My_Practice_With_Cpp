#include <iostream>

using namespace std;

int power(int x, int y)
{
    int power_n = 1;
    for (int i = 0; i < y; i++)
    {
        power_n *= x;
    }
    return power_n;
}
int main(void)
{
    cout << power(2, 10);
    return 0;
}