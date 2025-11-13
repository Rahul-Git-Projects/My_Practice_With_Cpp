#include <iostream>

using namespace std;

void bubble_sort(void)
{
    int n;
    cin >> n;
    int arr[n], temp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int x : arr)
    {
        cout << x << " ";
    }
    return;
}
int main(void)
{
    bubble_sort();
    return 0;
}