#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            n++;
            cout << setw(4) << n;
        }
        cout << endl;
    }

    return 0;
}