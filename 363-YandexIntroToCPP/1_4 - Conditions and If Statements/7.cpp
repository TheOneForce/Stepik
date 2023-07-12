/* 
Three integers are given. Determine how many of them are the same. 
The program should output one of the numbers: 
3 (if all match), 
2 (if two match), or 
0 (if all numbers are different). 

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
  if (x == y || y == z || x == z) {
    if ( x == y && y == z) {
    cout << 3;
    }
    else {
    cout << 2;
    }
  }
  else {
    cout << 0;
  }
    
  return 0;
}
