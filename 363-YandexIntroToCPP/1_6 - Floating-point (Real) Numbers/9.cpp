/*
Dana Sequence of natural numbers x1, x2, ..., xn. The standard deviation is called magnitude
https://ucarecdn.com/a5272a3c-f857-4969-a054-0a362300c32d/
where is the average value of the sequence.
https://ucarecdn.com/f6612807-4fb8-42fc-802e-5221860e8fa2/
Determine the standard deviation for a given sequence of natural numbers ending with the number 0.

Input data format
A sequence of natural numbers ending in the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its completion). There are at least two numbers up to 0 in a sequence.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    long int x, y = 0;
    double n=0,z=0,f=0;
    cin >> x;
    while (x != 0) {
        y = y + x;
        n++;
        z = z + x * x;
        cin >> x;
    }
    double s = y / n,q=sqrt((z-(y*y)/n)/(n-1));
    cout << setprecision(11);
    cout << q;
    return 0;
}
