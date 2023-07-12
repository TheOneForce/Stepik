/*
The real coefficients a, b, c are given. Solve the equation ax2 + bx + c = 0 and print all its roots.

Input data format
Three real numbers are entered.

Output Format
If this equation has no roots, print the number 0. If the equation has a single root, print the number 1 followed by that root. If the equation has two roots, print the number 2 followed by the two roots in ascending order. If the equation has infinitely many roots, output the number 3.
*/



#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0 and b == 0 and c == 0) {
        cout << 3;
        return 0;
    }
    if (a == 0 and b != 0) { 
        cout << 1 << " " << -c/b;
        return 0;
    }
    double D;
    D = (b*b - 4*a*c);
    if (D < 0 || a == 0 and b == 0 and c != 0) cout << 0;
    else if (D == 0) cout << 1 << " " << (-b/(2 * a));
    else if (D > 0) {
        double x1, x2;
        x1 = (-b - sqrt(D))/(2 * a);
        x2 = (-b + sqrt(D))/(2 * a);
        cout << 2 << " " << min(x1, x2) << " " << max(x1, x2);
    }
  return 0;
}
