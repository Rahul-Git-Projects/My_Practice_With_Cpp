#include <iostream>

using namespace std;

int main(void)
{
    string s1;
    s1 = "Adithya";
    string ::iterator it;
    int count = 0;
    for (it = s1.begin(); it != s1.end(); it++)
    {
        count++;
    }

    cout << count;
    return 0;
}