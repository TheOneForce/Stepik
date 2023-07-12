/*
On this line, determine whether it is a palindrome (that is, it reads the same both from left to right and from right to left).

Input
The input is 1 line without spaces.

Output
You must output yes if the string is a palindrome, and no otherwise.
*/



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str, rstr;
    getline(cin, str);
    rstr = str;
    reverse(rstr.begin(), rstr.end());
    if (rstr == str) cout << "yes";
    else cout << "no";
  return 0;
}
