/*
Determine the sum of all the elements of the sequence ending with the number 0.

Input data format
A sequence of integers ending with the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its ending.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int x, y = 0;
    cin >> x;
    while (x != 0) {
        y = y + x;
        cin >> x;
    }
    cout << y;
  return 0;
}
