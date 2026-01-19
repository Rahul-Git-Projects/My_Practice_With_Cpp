#include <iostream>

using namespace std;

int add(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

int main(void)
{
    cout << add(2, 3);

    return 0;
}