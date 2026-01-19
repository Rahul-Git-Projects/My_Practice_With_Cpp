#include <iostream>

using namespace std;


int sum_squares(int a,int b){
    if (a == b) return a*a;
    else {
        int m = (a + b) /2;
        return sum_squares(a,m) + sum_squares(m + 1,b);
    }
}
int main(void){

    cout << sum_squares(3,4);
    return 0;
}