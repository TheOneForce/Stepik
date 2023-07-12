/*
Find the indexes of the first occurrence of the maximum element.

Input data format
The program receives the size of the array n and m as input, then n rows of m numbers in each. n and m do not exceed 100.

Output Format
Print the two numbers: the row number and the column number, which contains the largest element in the two-dimensional array. 
If there are several such elements, then the one with the lower row number is displayed, and if the row numbers are equal, then the one with the lower column number is displayed.
*/



#include <iostream>
#include <climits>
using namespace std;
int main() {
    int im, jm, max = INT_MIN, n, m, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] > max) {
                max = a[i][j];
                im = i;
                jm = j;
            }
        }
    }
    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }*/
    cout << im << " " << jm;
  return 0;
}
