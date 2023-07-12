/*
In a cinema, there are n rows of m seats each (n and m do not exceed 20). A two-dimensional array stores information about tickets sold, the number 1 means that the ticket for this seat has already been sold, the number 0 means that the seat is free. There was a request for the sale of k tickets for adjacent seats in the same row. Determine whether such a query can be executed.

Input data format
The program receives as input the numbers n and m. Next comes n lines containing m numbers (0 or 1), separated by spaces. Then the number k is given.

Output Format
The program should display the number of the row in which there are k consecutive free seats. If there are several such rows, then display the number of the smallest suitable row. If there is no suitable series, print the number 0.
*/



#include <iostream>
using namespace std;
int main() {
    int a[20][20], n, m, k;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> k;
    int z = 0, max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                z++;
                if (max < z) max = z;
                if (max == k) {
                    cout << i+1;
                    return 0;
                }
            }
            else {
                z = 0;
            }
        }
        z = 0;
    }
    cout << 0;
  return 0;
}
