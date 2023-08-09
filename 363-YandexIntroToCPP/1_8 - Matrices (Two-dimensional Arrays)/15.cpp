/*
Using the given numbers n and m, fill a two-dimensional array of size n×m with numbers from 1 to n×m in a spiral coming out of the upper left corner and twisted clockwise, as shown in the example.

Input data format
Two numbers n and m are entered, not exceeding 100.

Output Format
Print the resulting array, allocating exactly 4 characters to the output of each element.
*/



#include <iostream>
using namespace std;
int main() {
    int no, mo, a[100][100];
    int io = 0;
    int jo = 0;
    int j = 0;
    int i = 0;
    int c = 1;
    int dir = 0; //0-right, 1-down; 2-left; 3-up
    cin >> no >> mo;
    int n = no;
    int m = mo;
    while (c < no * mo) {
        if (dir == 0) { ////////////////RIGHT
            for (j; j < m-1; j++) {
                a[i][j] = c;
                c++;
            }
            dir = 1;
            io++;
        }
        else if (dir == 1) { ////////////////DOWN
            for (i; i < n-1; i++) {
                a[i][j] = c;
                c++;
            }
            dir = 2;
            jo++;
        }
        else if (dir == 2) { ////////////////LEFT
            for (j; j > jo-1; j--) {
                a[i][j] = c;
                c++;
            }
            dir = 3;
            n--;
        }
        else if (dir == 3) { ////////////////UP
            for (i; i > io; i--) {
                a[i][j] = c;
                c++;
            }
            dir = 0;
            m--;
        }
    }
    a[i][j] = c;
    for (int i = 0; i < no; i++) {
        for (int j = 0; j < mo; j++) {
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
