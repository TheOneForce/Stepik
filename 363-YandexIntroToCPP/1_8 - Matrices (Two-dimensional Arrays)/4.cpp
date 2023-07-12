/*
An odd number n is given, not exceeding 15. 
Create a two-dimensional array of n×n elements, filling it with the characters "." (Each element of the array is a single-character string.) 
Then fill in the middle row of the array, the middle column of the array, the main diagonal, and the side diagonal with the "*" characters. 
As a result, the "*" in the array should form an asterisk image. Display the resulting array on the screen, separating the array elements with spaces.
*/



#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char a[15][15];
    // dots only
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = '.';
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i==j ||
                j==n/2+1 ||
                i==n/2+1 ||
                j+i==n+1) a[i][j] = '*';
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
  return 0;
}
