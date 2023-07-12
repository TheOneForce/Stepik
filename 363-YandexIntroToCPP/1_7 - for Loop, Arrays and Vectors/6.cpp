/*
An array of numbers is given. Print all elements of the array that are larger than the previous element .

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <vector>
using namespace std;
int main() {
    int amm;
    cin >> amm;
    vector <int> a(amm);
    cin >> a[0];
    for (int i = 1; i < amm; i++) {
        cin >> a[i];
        if (a[i] > a[i-1]) cout << a[i] << " ";
    }
  return 0;
}
