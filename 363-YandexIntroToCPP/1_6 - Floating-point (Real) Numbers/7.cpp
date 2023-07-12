/*
The interest rate on the deposit is P percent per annum, which is added to the deposit amount after a year. The contribution is X rubles Y kopecks. Determine the size of the contribution after K years.

Input data format
The program receives integers P, X, Y, K as input .

Output Format
The program should display two numbers: the amount of the deposit in K years in rubles and kopecks. The fractional number of kopecks at the end of the year is discarded. The recalculation of the deposit amount (with the discarding of fractional parts of kopecks) occurs annually.
Note
In this task, there are often problems with accuracy. If you have them, try to solve the problem in integers.
*/



#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double p, x, y;
    int k;
    cin >> p >> x >> y >> k;
    p = p / 100;
    int amm;
    amm = x * 100 + y;
    for (int i; i < k; i++) {
        amm += amm * p;
    }
    y = amm % 100;
    x = amm / 100;
    //cout << fixed << setprecision(2);
    //cout << setprecision(0) << fixed;
    cout << x << " " << y;
    return 0;
}
