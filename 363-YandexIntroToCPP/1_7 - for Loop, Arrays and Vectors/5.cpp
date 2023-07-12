/*
Find the number of positive elements in a given array.

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
    int k;
    for (int i = 0; i < m; i++) {
        if (a[i] > 0) k++;
    }
    cout << k;
    return 0;
}
