#include <iostream>
using namespace std;

int sum(int x, int y) { return x + y; }
float sum(float x, float y) { return x + y; }
int sum(int x, int y, int z) { return x + y + z; }

int main(void)
{
    cout << sum(10, 5);
    cout << sum(12.9f, 8.3f);
    cout << sum(10, 20, 30);
}





