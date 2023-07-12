/*
The natural number n > 1 is given. Print its smallest divisor other than 1.
The solution is designed in the form of the MinDivisor(n) function. The number of operations in the program must be proportional to the root of n.Indication.
If the number n does not have a divisor less than n, then the number n is prime and the answer will be the number n itself.

Input data format
A natural number is entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <cmath>
using namespace std;
int MinDivisor(int n) {
    bool h = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (!(n % i)) {
            return i;
            break;
            bool h = 1;
        }
    }
    if (h == 0) return n;
}
int main() {
    int n;
    cin >> n;
    cout << MinDivisor(n);
  return 0;
}
