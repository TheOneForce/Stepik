/*
For this integer N, print all squares of natural numbers that do not exceed N, in ascending order.

Input data format
A natural number is entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int i = 1, x, n;
    cin >> x;
    while(n <= x) {
        n = i;
        n = n * n;
        if (n <= x) {
            cout << n << " ";
        }
        i = i + 1;
    }
  // put your code here
  return 0;
}
