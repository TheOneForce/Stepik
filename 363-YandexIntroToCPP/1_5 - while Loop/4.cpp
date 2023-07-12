/*
An integer not less than 2 is given. Output its smallest natural divisor other than 1.

Input data format
A positive integer is entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int i = 2, x, n = 0;
    cin >> x;
    while (n == 0){
        if (x % i == 0) {
            n = i;
            cout << n;
        }
        i = i + 1;
    }
  return 0;
}
