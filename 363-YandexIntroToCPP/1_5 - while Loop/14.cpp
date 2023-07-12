/*
A sequence of natural numbers ending with the number 0 is given. Determine what is the largest number of consecutive elements of this sequence are equal to each other. If there is not a single pair, triplet, etc. elements equal to each other, then the program should display the number 1.

Input data format
A sequence of natural numbers ending in the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its completion).

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int i = 1, i2 = 1, max = 0, pre, now = -1;
    while (now != 0) {
        pre = now;
        cin >> now;
        if (pre == now) {
            i++;
            if (max < i) {
                i2++;
            
            }
            max = i2;
        }
        else {
            i = 1;
        }
    }
    cout << i2;
    return 0;
}
