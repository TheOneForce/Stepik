/*
The lengths of the sides of the triangle are given. Calculate the area of the triangle.

Input data format
Three positive numbers are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, p;
    cin >> a >> b >> c;
    p = (a + b + c) / 2.0;
    cout << sqrt(p*(p-a)*(p-b)*(p-c));
  return 0;
}
