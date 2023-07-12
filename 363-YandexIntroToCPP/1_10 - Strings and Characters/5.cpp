/*
A single character is entered, change its case. That is, if a lowercase letter was entered, capitalize it and vice versa. Characters that are not a Latin letter must be displayed unchanged.

Input
A single character is entered.

Output
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z') {
        char b = a - 32;
        cout << b;
    }
    else if ( a >= 'A' && a <= 'Z') {
        char b = a + 32;
        cout << b;
    }
    else cout << a;
  // put your code here
  return 0;
}
