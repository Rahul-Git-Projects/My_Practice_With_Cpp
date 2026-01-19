#include <iostream>

using namespace std;

int main(void)
{
    int a[10], p_count = 0, n_count = 0;
    cout << "Enter the elements of an array containing 10 elements: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (auto x : a)
    {
        if (x < 0)
            n_count++;
        else if (x > 0)
            p_count++;
    }

    cout << "The number of positive elements in your array is " << p_count << endl;
    cout << "The number of negative elements in your array is " << n_count << endl;

    return 0;
}