/*
The numbers n and m are given. Fill an array of size n × m in a checkerboard pattern: 
the cells of one color are filled with zeros, and the other color is filled with numbers of the natural series from top to bottom, from left to right. 
In the upper left corner, the number 1 is written.

Input data format
Two numbers n and m are entered, not exceeding 100.

Output Format
Print the resulting array, allocating exactly 4 characters to the output of each element.
*/



#include <iostream>
using namespace std;
int main() {
    
    int n, m, c = 1;
    int a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ( (i+j-1)%2 ) a[i][j] = c++;
            else a[i][j] = 0;
        }
    }  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
}
