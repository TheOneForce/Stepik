/*
An array of numbers is given. Count how many pairs of elements are equal to each other. It is believed that any two elements equal to each other form one pair, which must be counted.

Input data format
In the first line, enter the number of elements in the array. In the second line, the elements of the array are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, temp, am = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    
    /*for (int i = 0; i < n; i++)
        cout << v[i] << " ";*/
    int k=1;
    for (int i = 0; i < n; i++) {
        while (k < n) {
            if (v[i] == v[k]) am++;
            k++;
        }
        k = i+2;
    }
        
    /*for (int i = 1; i < n; i++) {
        if (v[i] == temp) {
            am += 1;
        }
        temp = v[i];
    }*/
    cout << am;
  return 0;
}
