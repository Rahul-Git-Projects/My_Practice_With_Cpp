#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int main(void)
{
    int vowels = 0;
    int consonants = 0;
    string s1;
    cout << "Enter a string: ";
    getline(cin, s1);

    char s[s1.length() + 1];

    s1.copy(s, s1.length());

    for (char c : s1)
    {
        if (c >= 65 || c <= 90 && c >= 97 && c <= 122)
        {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    int words = 0;
    char *token = strtok(s, " ");
    while (token)
    {
        words++;
        token = strtok(NULL, " ");
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Words: " << words << endl;

    return 0;
}