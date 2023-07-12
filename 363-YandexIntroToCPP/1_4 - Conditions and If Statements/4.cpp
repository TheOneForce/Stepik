/*
Two integers are given. The program should output one if the first number is greater than the second, two if the second is greater than the first, or zero if they are equal.

Input data format
Two numbers are entered.

Output Format
Display the answer to the problem.
*/


#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(x >= y) {
        if (x == y) {
            cout << "0";
        }
        else {
            cout << "1";
        }
    }
    else {
        cout << "2";
    }
  return 0;
}
