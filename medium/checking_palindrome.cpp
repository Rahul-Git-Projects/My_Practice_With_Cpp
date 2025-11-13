#include <iostream>

using namespace std;

int main(void)
{
    string user_string;
    string reverse_string = "";
    string character = " ";
    string ::reverse_iterator it;

    cout << "Enter a string: ";
    cin >> user_string;
    for (it = user_string.rbegin(); it != user_string.rend(); it++)
    {
        character[0] = *it;
        reverse_string.append(character);
    }
    if (!(user_string.compare(reverse_string)))
        cout << "Palindrome";
    else
    {
        cout << "Not a palindrome";
    }

    return 0;
}