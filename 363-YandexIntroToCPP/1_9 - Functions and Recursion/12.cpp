/*
Exponentiate You can do it much faster than N multiplications! To do this, you need to use the following recurrence ratios:
a^n = (a^2)^(n/2) at even n,
a^n = a × a^(n−1) with odd n.
Implement the algorithm fast exponentiation using a recursive function.

Input data format
A real number a and a non-negative integer n are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
double power(double a, int n) {
    if (n == 0) return 1;
    if (n == 1) return a;
    else if (n % 2 != 0)
        return a * power(a, n-1);
    else if (n % 2 == 0)
        return power(a*a, n/2);
}
int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
  return 0;
}
