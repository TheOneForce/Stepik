/*
Use the character you entered to determine if it is a number.

Input
A single character is entered.

Output
Print "yes" if the character is a number and "no" otherwise. Please note that words must be displayed in small letters.
*/



#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    if (a >= '0' && a <= '9') cout << "yes";
    else cout << "no";
  // put your code here
  return 0;
}
