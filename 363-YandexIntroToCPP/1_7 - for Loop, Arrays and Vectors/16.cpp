/*
N pins were set in one row, numbering them from left to right with numbers from 1 to N. Then along this row threw K balls, while the i-th ball knocked down all the pins with numbers from li before ri inclusive. Determine which pins are left standing still.

Input data format
The program gets on input the number of pins N and the number of throws K. Next comes K pairs of numbers li, ri, with 1 ≤ li, ri ≤ N.

Output Format
The program should output a sequence of N characters, where the j-th character is "I" if the j-th point is left standing, or "." if the j-th point has been knocked down.
*/



#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k, a, r;
    cin >> n >> k;
    vector <char> v(n, 'I');
    for (int i = 0; i < k; i++) {
        cin >> a >> r;
        a--;
        for (a; a < r; a++) {
            v[a] = '.';
        }
    }
    for (auto i: v) {
        cout << i;
    }
  return 0;
}
