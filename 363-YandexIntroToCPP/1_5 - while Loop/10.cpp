/*
The sequence consists of natural numbers and ends with the number 0. Determine how many elements of this sequence are equal to its largest element.

Input data format
A non-empty sequence of integers ending with the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its ending).

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int x, y, i = 0;
    x = -1;
    y = 1;
    while (x != 0) {
        cin >> x;
        if (x == y) {
            i++;
        }
        if (x > y) {
            y = x;
            i = 1;
        }
    }
    cout << i;
    return 0;
}
