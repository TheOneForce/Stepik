/*
Three natural numbers A, B, C are given. Determine if there is a triangle with such sides. 
If the triangle exists, print the string YES, otherwise print the string NO.
A triangle is three points that do not lie on the same line.

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
  if (x < (y+z) && y < (x+z) && z < (y+x)) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}
