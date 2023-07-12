/*
Sort the array.

Input
The first line of input data contains the number of elements in array N ≤ 10^5. Next comes N integers that do not exceed absolute magnitude 10^9.

Output
Print these numbers in descending order.
*/



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (auto now : a) {

        cout << now << " ";
    }
    return 0;
}
