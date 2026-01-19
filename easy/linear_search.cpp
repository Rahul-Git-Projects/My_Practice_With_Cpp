#include <iostream>
using namespace std;

int main(void)
{
    int key;
    int a[10];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    cout << "Enter a key: ";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == key)
        {
            cout << "Key is at " << i << " index";
            return 0;
        }
    }
    cout << "key not found";

    return 0;
}
