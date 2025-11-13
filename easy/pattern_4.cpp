#include <iostream>
using namespace std;

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i - 1 ; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i ; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
