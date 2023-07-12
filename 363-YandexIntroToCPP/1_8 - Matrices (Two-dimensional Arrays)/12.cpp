/*
According to the given numbers n and m, fill a two-dimensional array of size n×m with numbers from 1 to n×m with a "snake", as shown in the example.

Input data format
Two numbers n and m are entered, each of which does not exceed 30.

Output Format
Print the resulting array, allocating exactly 4 characters to the output of each element.
*/



#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int c = 1, n, m, a[30][30];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                a[i][j] = c;
            }
            
            else {
                a[i][m-j-1] = c;
            }
        c++;
        }
    //c--;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
     //put your code here
  return 0;
}
