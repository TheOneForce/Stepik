/*
The Fibonacci sequence is determined by so:
F(0) = 0, F(1) = 1, ..., F(n) = F(n−1) + F(n−2).
For this number N, determine the N-th Fibonacci number F(N).

Input data format
The natural number N is introduced.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int n, i = 0, fib1 = 1, fib2 = 1, fib_sum = 1;
    cin >> n;
    while (i < n - 2) {
        fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;
        i = i + 1;
    }
    cout << fib_sum;
    return 0;
}
