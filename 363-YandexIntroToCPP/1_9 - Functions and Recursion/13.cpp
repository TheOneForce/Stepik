/*
A sequence of numbers ending with the number 0 is given. Find the sum of all these numbers without using a loop.

Input data format
A sequence of integers ending with the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its completion).

Output Format
Display the answer to the problem.
*/



#include <iostream>

using namespace std;

int sum_seq() {
    int num;
    cin >> num;
    if (num == 0) {
        return num;
    }
    else {
        return num + sum_seq();
    }
}

int main() {
    cout << sum_seq();
    return 0;
}
