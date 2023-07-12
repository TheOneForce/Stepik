/*
Given is a positive real number X. Print its first digit after the decimal point.

Input data format
A positive real number is entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double x;
    cin >> x;
    cout << fixed << setprecision(1);
    cout << int((x-trunc(x))*10);
  return 0;
}
