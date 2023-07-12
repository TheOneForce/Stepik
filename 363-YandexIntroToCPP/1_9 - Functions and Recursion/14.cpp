/*
Write the function fib(n), which returns the n-e Fibonacci number for a given positive integer n. You can't use loops in this task - use recursion.
The first and second Fibonacci numbers are equal to 1, and each next one is equal to the sum of the previous two.

Input data format
An integer is entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int fib(int n) {
    if (n == 1 or n == 2) return 1;
    else return fib(n - 1) + fib(n - 2);
}
int main() {
    int n;
    cin >> n;
    cout << fib(n);
  return 0;
}
