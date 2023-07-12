/*
Дан многочлен P(x)=anxn + an−1xn−1+ … + a1x + a0 and the number x. Calculate the value of this polynomial, using Horner's scheme:
P(x)=(… (((anx + an−1)x + an−2)x + an−3) … ) x+ a0

Input data format
First, the program is fed an integer non-negative number n ≤ 20, followed by the real number x, followed by n+1 real number — the coefficients of the polynomial from the highest to the lowest.

Output Format
The program should output the value of the polynomial.
*/



#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double x, a, p = 0;
    cin >> n >> x; 
    while (n--) {
        cin >> a;
        p = (p + a) * x; 
    }
    cin >> a;
    p += a;
    cout << setprecision(6) << fixed;
    cout << p;
    return 0;
}
