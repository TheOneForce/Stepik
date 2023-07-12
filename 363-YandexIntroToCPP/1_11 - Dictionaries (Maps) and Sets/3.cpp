/*
A list of integers is given, which can contain up to 100000 numbers. Determine how many different numbers are found in it.

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
        s.insert(x);
    }
    cout << s.size();
  return 0;
}
