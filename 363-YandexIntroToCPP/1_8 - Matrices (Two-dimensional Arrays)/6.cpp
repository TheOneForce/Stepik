/*
Given a two-dimensional array and two numbers: i and j. Change the columns with the numbers i and j in the array

Input data format
The program receives as input the size of the array n and m, not exceeding 100, then the elements of the array, then the numbers i and j.

Output Format
Print the result.
*/



#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, a[100][100], a2[100][100], o, p;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            a2[i][j] = a[i][j];
        }
    }
    cin >> o >> p;
    for (int i = 0; i <= n; i++) {
        a2[i][o] = a[i][p];
        a2[i][p] = a[i][o];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a2[i][j] << " ";
        }
        cout << endl;
    }
  return 0;
}
