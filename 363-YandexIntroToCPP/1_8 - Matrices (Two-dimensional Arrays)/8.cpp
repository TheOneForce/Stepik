/*
A square two-dimensional array of size n is given × Print the elements of the k-th diagonal below the main diagonal (i.e. if k = 1, then you need to display the elements of the first diagonal lying below the main one, if k = 2, then the second diagonal, etc.).
The value of k can be negative, for example, if k = −1, then you need to display the value of the first diagonal lying above the main one. If k = 0, then you need to display the elements of the main diagonal.
The program receives as input a number n that does not exceed 10, then an array of size n × n, then the number k.
*/



#include <iostream>
using namespace std;
int main() {
    int n, a[10][10];
    cin >> n;
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i - k == j)
                cout << a[i][j];
        }
        cout << " ";
    }
    
  // put your code here
  return 0;
}
