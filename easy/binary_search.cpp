#include <iostream>
using namespace std;

int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 4}, key;
    cout << "Enter any element in the array: ";
    cin >> key;

    for (int l = 0, h = 9, m; l <= h;)
    {
        m = (l + h) / 2;
        if (a[m] == key)
        {
            cout << "Element is at :" << m << " index";
            break;
        }
        else if (a[m] > key)
        {
            h = m - 1;
        }
        else if (a[m] < key)
        {
            l = m + 1;
        }
    }

    return 0;
}