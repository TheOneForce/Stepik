/*
Convert the character to uppercase.

Input
A single character is entered.

Output
If the entered character is a lowercase letter of the Latin alphabet, then print the same capital letter. Otherwise, print the same character that was entered.
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
    else cout << a;
  // put your code here
  return 0;
}
