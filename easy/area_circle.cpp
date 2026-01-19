#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float area;
    int r;

    cout << "Enter the  radius of any circle: ";
    cin >> r;

    area = acos(-1) * r * r;

    cout << "Area of the circle is : " << area
         << endl;

    return 0;
}