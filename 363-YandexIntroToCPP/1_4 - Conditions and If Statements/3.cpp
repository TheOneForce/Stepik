/*
Two integers are given. Print the value of the largest of them. If the numbers are equal, print any of them.

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
    if(x > y) {
         cout << x;
    }
    else {
        cout << y;
    }
  return 0;
}
