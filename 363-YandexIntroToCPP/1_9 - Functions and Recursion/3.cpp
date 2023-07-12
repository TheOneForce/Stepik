/*
Write a function min(a, b) that calculates at least two numbers. Then write the min4(a, b, c, d) function calculating a minimum of 4 numbers using the min function. Count four integers and print their minimum.

Input data format
Four integers are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int min(int a, int b) {
    if (a < b) {
        return a; 
    }
    if (a > b) {
        return b;
    }
}
int min4(int a, int b, int c, int d) {
    return min(min(a, b), min(c, d));
}
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d);
  return 0;
}
