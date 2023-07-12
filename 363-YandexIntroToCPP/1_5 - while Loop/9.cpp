/*
The sequence consists of natural numbers and ends with the number 0. Determine the value of the largest element in the sequence.

Input data format
A sequence of integers ending with the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its completion).

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int x, y;
    x = y = -1;
    while (x != 0) {
        cin >> x;
        if (x > y) {
            y = x;
        }
    }
    cout << y;
  return 0;
}
