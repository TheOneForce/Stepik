/*
The program receives as input a sequence of non-negative integers, each number is written in a separate line. The sequence ends with the number 0, when read, the program must finish its work and print the number of members of the sequence (not counting the final number 0).
Numbers following the number 0 do not need to be read.

Input data format
A sequence of integers ending with the number 0 is entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int x, i = 0;
    cin >> x;
    while (x != 0) {
        cin >> x;
        i = i + 1;
    }
    cout << i;
    return 0;
}
