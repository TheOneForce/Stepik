/*
The sequence consists of natural numbers and ends with the number 0. Determine the value of the second largest element in this sequence, that is, the element that will be the largest if the largest element is removed from the sequence.

Input data format
A sequence of integers ending with the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its completion).

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int last = -1, premax = 0, max = 0;
    while (last != 0) {
        cin >> last;
        if (last >= max) {
            premax = max;
            max = last;
        }
        if (last < max && last > premax) {
            premax = last;
        }
    }
    cout << premax;
    return 0;
}
