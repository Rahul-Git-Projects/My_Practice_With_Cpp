#include <iostream>
using namespace std;

void Discount(int amount)
{
    float disAmount;

    if (amount >= 5000)
    {
        cout << amount - 0.2 * amount;
    }
    else if (amount >= 2000)
    {
        cout << amount - 0.1 * amount;
    }
    else
    {
        cout << amount - 0.05 * amount;
    }
}