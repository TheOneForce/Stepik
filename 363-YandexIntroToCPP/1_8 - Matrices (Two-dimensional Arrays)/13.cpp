/*
Using the given numbers n and m, fill a two-dimensional array of size n×m with numbers from 1 to n×m "diagonals", as shown in the example.

Input data format
Two numbers n and m are entered, not exceeding 100.

Output Format
Print the resulting array, allocating exactly 4 characters to the output of each element.
*/



#include <iostream>
using namespace std;
int main() {
    int n, m, a[100][100];
    cin >> n >> m;
    int c = 1;
    int d = n + m;
    int j;
    int i;
    for (int k = 0; k < d - 1; k++) {
        i = 0;
        j = k;
        if (k > m - 1) {
            i = k - (m - 1);
            j = m - 1;
        }
        while (i < n && j >= 0) {
            a[i][j] = c;
            c++;
            i++;
            j--;
        }
    }
    cout.width(4);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
