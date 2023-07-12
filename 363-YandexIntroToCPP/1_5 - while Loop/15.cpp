/*
An element of a sequence is called a local maximum if it is strictly greater than the previous and subsequent element of the sequence. The first and last element of the sequence are not local maxima.
A sequence of natural numbers ending with the number 0 is given. Determine the number of strict local maxima in this sequence.

Input data format
A sequence of natural numbers ending in the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its completion).

Output Format
Display the answer to the problem.
*/



#include <iostream>

using namespace std;
int main() {

    int sled, now, pred, amm = 0;
    cin >> sled;
    pred = now = sled;

    while (sled != 0) {
        if (now > pred&& now > sled) {
            amm++;
        }
        pred = now;
        now = sled;
        cin >> sled;
    }

    cout << amm;
    return 0;
}
