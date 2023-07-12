/*
Two lists of numbers are given, which can contain up to 100000 numbers each. Print all the numbers that are included in both the first and the second lists in ascending order.

Input
Enter the number N - the number of elements of the first list, and then N numbers of the first list.
Then enter the number M - the number of elements of the second list, and then M numbers of the second list.

Output
Display the answer to the problem.
*/



#include <iostream>
#include <set>
using namespace std;
int main() {
    set <int> s;
    set <int> a;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    int n2, c;
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> x;
        if (s.find(x) != s.end()) {
            a.insert(x);
        }
    }
    for (auto c : a) {
        cout << c << " ";
    }
  return 0;
}
