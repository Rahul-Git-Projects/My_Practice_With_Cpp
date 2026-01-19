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

<<<<<<< HEAD
    cout << "Area of the circle is : " << area
         << endl;

=======
    cout << "Area of the circle is " << area
         << endl;
>>>>>>> 5c61d7dfbb97591bff162333bd564bb60d2fa069
    return 0;
}