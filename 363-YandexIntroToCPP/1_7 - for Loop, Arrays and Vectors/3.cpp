/*
Print all the elements of the array with even indices (that is, , , , ...). A[0]A[2]A[4]

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m;
    cin >> m;
    vector <int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i += 2) {
        cout << a[i] << " ";
    }
        
    return 0;
}
