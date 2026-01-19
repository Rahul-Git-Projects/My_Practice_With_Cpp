#include <iostream>
#include <cmath>
using namespace std;

void bubble_sort(void)
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sorted_array[n], min = arr[0], min_index;
    ;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= min)
            {
                min = arr[i];
                min_index = i;
            }
        }

        sorted_array[j] = min;
        arr[min_index] = 2 * pow(10, 9);
        min = arr[0];
    }
    cout << "[ ";
    for (int i : sorted_array)
    {
        cout << i << " ";
    }
    cout << "]" << endl;

    return;
}

int main(void)
{
    bubble_sort();
    return 0;
}