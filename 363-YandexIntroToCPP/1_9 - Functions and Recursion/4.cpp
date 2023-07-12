/*
Four are given Real numbers: x1and1, x2and2. Write a function distance(x1, y1, x2, y2) that calculates the distance between dot (x1. and1) and (x2, and2). Count four real numbers and print the result operation of this function.

Input data format
Four real numbers are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <cmath>
using namespace std;
double distance (double x1, double y1, double x2, double y2) {
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << distance(x1, y1, x2, y2);
  return 0;
}
