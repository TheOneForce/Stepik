/*
The shoe store sells shoes of different sizes. It is known that one pair of shoes can be worn on another if it is at least three sizes larger. A customer came to the store. It is required to determine what the largest number of pairs of shoes the seller can offer him so that he can wear them all at the same time.

Input
First, the size of the customer's foot is entered (he will not be able to wear smaller shoes), then the number of pairs of shoes in the store and the size of each pair. Size - a natural number that does not exceed 100, the number of pairs of shoes in the store does not exceed 1000.

Output
Display the singular number - the maximum number of pairs of shoes.
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, size;
    cin >> size;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = 0;
    for (auto now : a) {
        if (now >= size) {
            size = now + 3;
            i++;
        }
    }
    cout << i;
    return 0;
}
