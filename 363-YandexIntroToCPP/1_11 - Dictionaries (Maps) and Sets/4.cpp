/*
The input line contains a sequence of numbers separated by a space. For each number print the word "YES" (in a separate line), if this number has previously occurred in the sequence, or "NO" if it has not.

Input
Enter the number N - the number of elements of the list, and then N numbers.

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
        if (s.find(x) == s.end()) {
            cout << "NO\n";
            s.insert(x);
        }
        else cout << "YES\n";
    }
}
