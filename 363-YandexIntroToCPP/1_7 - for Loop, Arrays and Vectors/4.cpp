/*
Print all the even elements of the array.

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered.

Output Format
Display the answer to the problem. The elements are displayed in the same order in which they appeared in the array.
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
    for (int i = 0; i < m; i++) {
        if (!(a[i]%2)) cout << a[i] << " ";
    }
        
    return 0;
}
