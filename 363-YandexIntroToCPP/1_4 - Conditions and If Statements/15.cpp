/*
Three numbers are given. Arrange them in descending order.

Input data format
Three numbers are entered.

Output Format
Display the answer to the problem.
*/


#include <iostream>
using namespace std;
int main() {
    int x, y , z;
    cin >> x >> y >> z;
    if (x > y) {
        x = y + x;
        y = x - y;
        x = x - y;
    }
    if (y > z) {
        y = z + y;
        z = y - z;
        y = y - z;
    }
    if (x > y) {
        x = y + x;
        y = x - y;
        x = x - y;
    }
    cout << x << " " << y << " " << z;
  return 0;
}
