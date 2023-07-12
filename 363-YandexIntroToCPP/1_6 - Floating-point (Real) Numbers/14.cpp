/*
The real numbers a, b, c, d, e, f are given. Solve the system of linear equations

Input data format
Six numbers are introduced - the coefficients of the equations of the system.

Output Format
Inference The program depends on the type of solution of this system.
If the system does not have decisions, then the program should output the singular 0.
If the system has infinitely Many solutions, each of which has the form Y = Kx + N, then the program should output the number 1, and then the values of K and N.
If the system has a single Solution (x0, y0), then the program should display the number 2, and then the values of x0 and y0.
If the system has infinitely Many solutions of the form x=x0, y — Any, then the program should output the number 3 followed by the value x0.
If the system has infinitely Many solutions of the form y=y0, x — any, then the program should print the number 4 followed by the value of y0.
If any pair of numbers (x, y) is a solution, then The program should display the number 5.
*/



#include <iostream>
using namespace std;
int main() {
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    double delta = (a * d) - (b * c);
    double deltax = (e * d) - (b * f);
    double deltay = (a * f) - (e * c);
    double x = deltax / delta;
    double y = deltay / delta;
    double k, n;

    if (delta != 0)
        cout << 2 << " " << x << " " << y;
    else if (!(deltax == 0 && deltay == 0)) cout << 0;
    else if (a == 0 && b == 0 && c == 0 && d == 0) {
        if (e != 0 || f != 0)
            cout << 0;
        else cout << 5;
    }
    else if (a == 0 && c == 0) {
        if (b != 0) y = e / b;
        else y = f / d;
        cout << 4 << " " << y;
    }
    else if (b == 0 && d == 0) {
        if (a != 0) x = e / a;
        else x = f / c;
        cout << 3 << " " << x;
    }
    else {
        if (b != 0) {
            n = e / b;
            k = -a / b;
        }
        else {
            n = f / d;
            k = -c / d;
        }
        cout << 1 << " " << k << " " << n;
    }
    return 0;
}
