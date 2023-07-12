/*
Given a number n that does not exceed 10 and an array of size n × n. 
Check if this array is symmetrical with respect to the main diagonal. 
Print the word "YES" if the array is symmetric, and the word "NO" otherwise.
*/



#include <iostream>
using namespace std;
int main() {
    int n, a[10][10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }*/
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!(a[i][j] == a[j][i])) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
  return 0;
}
