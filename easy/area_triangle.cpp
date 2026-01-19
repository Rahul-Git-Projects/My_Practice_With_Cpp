#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    float area;

    cout << "Enter  a and b";
    cin >> a >> b;

    area = (float)a * b / 2;

    cout << "Area of the triangle with the given dimensions is  " << area;

    return 0;
    
}