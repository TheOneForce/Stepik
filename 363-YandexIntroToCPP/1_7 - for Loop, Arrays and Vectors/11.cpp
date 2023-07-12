/*
Rearrange the adjacent elements of the array (A[0], c, A[1], A[2], c, A[3], etc.). If there are an odd number of elements, then the last element remains in its place.

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
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < (n/2)*2; i+=2) {
        mem = vec[i];//0=x x, y
        vec[i] = vec[i+1];//x=y// y, y
        vec[i+1] = mem;//y=x y, x
    }
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
  return 0;
}
