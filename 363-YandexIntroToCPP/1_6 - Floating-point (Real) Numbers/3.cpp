/*
Given is a positive real number X. Print its fractional part.

Input data format
A positive real number is entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double x;
    cin >> x;    
    cout << x - floor(x);
  return 0;
}
