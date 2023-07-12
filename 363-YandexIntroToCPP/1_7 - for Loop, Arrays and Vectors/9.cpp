/*
Print the value of the smallest odd element in the list, and if there are no odd items in the list, print the number.0

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
    int a, c, m = 0;
    cin >> c;
    cin >> a;
    m = a;
    for (int i = 0; i < c-1; i++) {
        cin >> a;
        if (a % 2 != 0 && a < m || m == 0 && a % 2 != 0) 
            m = a;
    }
    if (m % 2 == 0) cout << 0;
    else cout << m;
  return 0;
}
