/*
Given a rectangular array of size n×m. Rotate it 90 degrees clockwise, writing the result to a new array of size m×n.

Input data format
Enter two numbers n and m that do not exceed 100, then an array of size n×m.

Output Format
Print the resulting array. Separate the numbers with a single space.
*/



#include <iostream>
using namespace std;
int main() {
    int m, n, a[100][100], b[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = n-1; j >= 0; j--) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
  return 0;
}
