#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    cout << "Undefined";
    return n + 1;
}

int main(void)
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    cout << "Enter all the elements  of the array: \n";
    int array[num];
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    int key_n;
    cout << "Enter any element in the array: ";
    cin >> key_n;

    int index = linear_search(array, num, key_n);
    cout << index;
    return 0;
}