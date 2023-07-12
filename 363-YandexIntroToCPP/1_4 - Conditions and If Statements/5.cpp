/*
Three integers are given. Find the largest of them (the program should output exactly one integer). The largest number in this problem is a number that is no less than any other.

Input data format
Three numbers are entered.

Output Format
Display the answer to the problem.
*/


#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x >= y && x >= z) {
        cout << x;
    }
    else if (y >= x && y >= z) {
        cout << y;
    }
     else if (z >= y && z >= x) {
        cout << z;
    }
  return 0;
}
