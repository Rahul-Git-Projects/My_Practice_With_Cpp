#include <iostream>
using namespace std;

int main(void)
{
    float basic_salary, allowance_percentage, deduction_percentage, net_salary;

    cout << "Enter your basic salary,allowance percentage,deduction percentage: " << endl;
    cin >> basic_salary >> allowance_percentage >> deduction_percentage;

    net_salary = basic_salary + allowance_percentage * basic_salary / 100 - deduction_percentage * basic_salary / 100;

    cout << "The net salary is " << net_salary;

    return 0;
}