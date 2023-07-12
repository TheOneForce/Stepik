/*
Five real numbers are given: x, y, xc, yc, r. Check if the point (x, y) belongs to a circle centered (xc, yc) and a radius r. If the point belongs to a circle, print the word YES, otherwise print the word NO.The solution must contain the function IsPointInCircle(x, y, xc, yc, r), which returns True if the point belongs to the circle and False if it does not.
The main program should read the coordinates of the point, call the IsPointInCircle function and, depending on the returned value, display the necessary message.
The IsPointInCircle function must not contain an if statement.

Input data format
Five real numbers are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <cmath>
bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
    return (pow(r, 2) >= pow((y-yc), 2) + pow((x-xc), 2));
}
using namespace std;
int main() {
    double x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    if (IsPointInCircle(x, y, xc, yc, r)) cout << "YES";
    else cout << "NO";
  return 0;
}
