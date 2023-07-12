/*
A two-dimensional array of size n×m is given (n and m do not exceed 1000). 
An array symmetrical to it relative to the main diagonal is called transposed to this one. 
It has dimensions m×n: the rows of the source array become the columns of the transposed, the columns of the original array become the rows of the transposed.

For this array, build a transposed array and display it on the screen.
*/



#include <iostream>
using namespace std;
int main() {
    int m, n, a[1000][1000];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
  return 0;
}
