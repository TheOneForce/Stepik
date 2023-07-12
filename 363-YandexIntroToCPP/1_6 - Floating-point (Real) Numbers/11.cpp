/*
The real coefficients a, b, c are given, with a ≠ 0. Decide Quadratic equation AX2 + bx + c = 0 and print all its roots.

Input data format
Three real numbers are entered.

Output Format
If the equation has two roots, print the two roots in ascending order, if one root, print one number, if there are no roots, print nothing.
*/



#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double D;
    D = (b*b - 4*a*c);
    if (D < 0) return 0;
    else if (D == 0) cout << (-b/(2 * a));
    else if (D > 0) {
        double x1, x2;
        x1 = (-b - sqrt(D))/(2 * a);
        x2 = (-b + sqrt(D))/(2 * a);
        cout << min(x1, x2) << " " << max(x1, x2);
    }
  return 0;
}
