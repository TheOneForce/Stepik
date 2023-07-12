/*
Print the value of the smallest of all positive elements in the array. It is known that there is at least one positive element in the array.

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int c, max, p=0;
    cin >> c; 
    vector<int> a(c);
    for (int i = 0; i < c; i++) {
        int in;
        cin >> in;
        if (in > 0) {
            a[p] = in;
            p++;
        }
    }
    max = a[0];
    for (int i = 0; i < p; i++) {
        if ((a[i] > 0 && a[i-1] > 0) && (a[i] < max)) {
            max = a[i]; 
        }
    }
    cout << max;
  return 0;
}
