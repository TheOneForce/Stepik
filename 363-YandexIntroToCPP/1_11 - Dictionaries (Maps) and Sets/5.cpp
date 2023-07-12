/*
Two lists of numbers are given, which can contain up to 100000 numbers each. Count how many numbers are contained in both the first list and the second at the same time.

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
            c++;
        }
    }
    cout << c;
  return 0;
}
