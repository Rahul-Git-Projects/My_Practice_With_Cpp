#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float x1, x2;
    int a, b, c;

    cout << "Enter a,b,c: \n";
    cin >> a >> b >> c;

    x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

    cout << "Roots of the quadratic equations are " << x1 << " and " << x2;
}