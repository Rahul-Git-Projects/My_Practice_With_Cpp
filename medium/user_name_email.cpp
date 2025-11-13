#include <iostream>

using namespace std;

int main(void)
{
    string email;
    string user_name;
    string character = " ";
    cout << "Enter your email address: ";
    getline(cin, email);

    int index = email.find('@');
    for (int i = 0; i < index; i++)
    {
        character[0] = email[i];
        user_name.append(character);
    }

    cout << "Username is " << user_name;
}