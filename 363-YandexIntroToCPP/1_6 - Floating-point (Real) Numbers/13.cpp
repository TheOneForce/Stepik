/*
The real numbers a, b, c, d, e, f are given.
has exactly one solution. Print the two numbers x and y, which are the solution of this system.

Input data format
Six numbers are introduced - the coefficients of the equations of the system.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    double a, b, c, d, e, f;
    double x, y;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    x = (e * d - b * f) / (a * d - b * c );
    y = (a * f - e * c) / (a * d - b * c );
    cout << x << " " << y;
  // put your code here
  return 0;
}
