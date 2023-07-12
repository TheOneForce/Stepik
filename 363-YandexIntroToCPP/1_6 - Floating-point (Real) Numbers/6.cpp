/*
The interest rate on the deposit is P percent per annum, which is added to the deposit amount at the end of the year. The contribution is X rubles Y kopecks. Determine the size of the deposit in a year.
You cannot use conditional instructions and loops to solve this problem.

Input data format
The program receives integers P, X, Y as input.

Output Format
The program should display two numbers: the amount of the deposit in a year in rubles and kopecks. The fractional part of the pennies is discarded.
*/



#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double p, x, y;
    cin >> p >> x >> y;
    p = p / 100;
    int amm;
    amm = x * 100 + y;
    amm += amm * p;
    y = amm % 100;
    x = amm / 100;
    //cout << fixed << setprecision(2);
    //cout << setprecision(0) << fixed;
    cout << x << " " << y;
    return 0;
}
