/*
A list is given, ordered in descending order of elements in it. Determine how many different elements there are.

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <set>
using namespace std;
int main() {
    set <int> s;
    int a, c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> a;
        s.insert(a);
    }
    cout << s.size();
  return 0;
}
