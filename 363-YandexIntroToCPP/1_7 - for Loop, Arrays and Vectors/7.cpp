/*
An array of integers is given. If it has two adjacent elements of the same character, print these numbers. If there are no adjacent elements of the same character, do not display anything. If there are several such pairs of neighbors, display the first pair.

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered. All numbers are non-zero.

Output Format
Display the answer to the problem. Items are displayed in descending order.
*/



#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int c;
    cin >> c; 
    vector<int> a(c);
    cin >> a[0];
    for (int i=1; i<c; i++) {
        cin >> a[i];
        if ((a[i] < 0 && a[i-1] < 0) || (a[i] > 0 && a[i-1] > 0)) {
            cout << min(a[i], a[i-1]) << " " << max(a[i], a[i-1]);
            break;
        }
    }
  return 0;
}
