/*
For this number N, print all integer powers of two, not greater than N, in ascending order.

Input data format
A natural number is entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
  int x, n = 1;
  cin >> x;
  while(n <= x) {
    cout << n << " ";
    n = n * 2;
  }
  return 0;
}
