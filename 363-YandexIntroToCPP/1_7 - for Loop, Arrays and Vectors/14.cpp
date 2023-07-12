/*
Given array. Print those elements that occur in the array only once. Items must be displayed in the order in which they appear in the list.

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a;
    cin >> a;
    vector<int> vec(a);
    for (int i = 0; i < a; i++) {
        cin >> vec[i];
    }
    vector<short> is(a);
    for (int i = 0; i < a; i++) {
        for (int j = i+1; j < a; j++) {
            if (vec[i] == vec[j]) {
                is[i] = 1;
                is[j] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < a; i++) {
        if (is[i] != 1) {
            cout << vec[i] << " ";
        }
    }
  return 0;
}
