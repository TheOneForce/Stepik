/*
Determine the average value of all the elements of the sequence ending with the number 0.

Input data format
A sequence of integers ending with the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its completion).

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double i, sum = 0, a = 1;
    for (i = 0; a != 0 ; i++) {
        cin >> a;
        sum += a;
    }
    double answ = sum / (i-1);
    cout << setprecision(11) << fixed;
    cout << answ;
    // put your code here
    return 0;
}
