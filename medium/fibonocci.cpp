#include <iostream>

using namespace std;

int fibonocci(int n){
    if (n < 2) return n;
    else {
        return fibonocci(n-1) + fibonocci(n-2);
    }
}

int main(void){
    cout << fibonocci(7);
}