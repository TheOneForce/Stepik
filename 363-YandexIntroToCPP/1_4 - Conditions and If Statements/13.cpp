/* 
The chocolate bar has the form of a rectangle divided into N×M slices. 
Chocolate can be broken once in a straight line into two parts. 
Determine whether it is possible to break off exactly K slices from the chocolate in this way.

Input data format
The program receives three numbers as input: N, M, K

Output Format
The program should output one of two words: "YES" or "NO"
*/


#include <iostream>
using namespace std;
int main() {
    int m, n, k;
    cin >> m >> n >> k;
    if ((k % m == 0 or k % n == 0) and (n * m > k)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
  return 0;
}
