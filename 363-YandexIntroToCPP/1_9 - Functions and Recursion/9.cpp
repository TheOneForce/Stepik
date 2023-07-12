/*
Given valid A is a positive number and an integer N.
Вычислите an. The solution is designed in the form of a recursive function power(a, n).

Input data format
A real positive number a and an integer n are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
long double power(long double a, int n) {
    if (n == 0) {
        return 1;
    }
    else if (n < 0) {
        return 1 / a * power(a, n + 1);
    }
    else {
        return a * power(a, n - 1);
    }
}
int main() {
    long double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}
