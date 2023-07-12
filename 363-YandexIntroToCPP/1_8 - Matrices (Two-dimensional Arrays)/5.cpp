/*
A number n not exceeding 100 is given. Create an array of size n×n and fill it according to the following rule. 
The numbers 0 should be written on the main diagonal. 
On the two diagonals adjacent to the main one, the number 1. 
On the next two diagonals of the number 2, etc., display the resulting array on the screen, separating the array elements with spaces.
*/



#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << abs(j-i) << " ";
        }
        cout << endl;
    }
  // put your code here
  return 0;
}
