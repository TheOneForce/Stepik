/*
Cyclically move the elements of the list to the right (A[0] goes to place A[1], A[1] to place A[2], ..., the last element goes to place A[0]).

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, mem;
    cin >> n;
    vector<int> v(n);
    for (int i = 1; i < n; i++) {
        cin >> v[i];
    }
    cin >> v[0];
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
  return 0;
}
