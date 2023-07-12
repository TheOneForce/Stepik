/*
The natural number n > 1 is given. Check if it's simple. The program should output the word YES if the number is prime and NO if the number is composite.
The solution is formatted as the IsPrime(n) function, which returns True for prime numbers and False for composite numbers. The number of operations in the program must be proportional to the root of n.

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
            h = 1;
        }
    }
    if (h == 0) return n;
}
int main() {
    int n;
    cin >> n;
    if (MinDivisor(n) == n) cout << "YES";
    else cout << "NO";
  return 0;
}
