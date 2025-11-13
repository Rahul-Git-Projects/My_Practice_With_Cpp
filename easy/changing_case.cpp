#include <iostream>

using namespace std;

int main(void)
{
    string s1 = "Adithya is a good person";
    string ::iterator i;
    for (i = s1.begin(); i != s1.end(); i++)
    {
        if (*i >= 97 && *i <= 122)
        {
            *i -= 32;
        }
        cout << *i;
    }
    return 0;
}