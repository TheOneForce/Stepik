/*
It is known that on the 8×8 board you can place 8 queens so that they do not beat each other. You are given an arrangement of 8 queens on the board, determine if there are a couple of beating each other among them.

Input data format
The program receives eight pairs of numbers as input, each number from 1 to 8 - the coordinates of 8 queens.

Output Format
If the queens don't hit each other, print the word NO, otherwise output YES.
*/



#include <iostream>
#include <vector>
#define x1 q[i]
#define y1 w[i]
#define x2 q[k]
#define y2 w[k]
using namespace std;
int main() {
    vector<int> q(8);
    vector<int> w(8);
    for (int i = 0; i != 8; i++) {
        cin >> q[i];
        cin >> w[i];
    }
    for (int i = 0; i != 8; i++) {
        for (int k = 0; k != 8; k++) {
            if (x1 == x2 && y1 == y2)
                break;
            else if ((x1 - x2 <= 1 && x1 - x2 >= -1) && (y1 - y2 <= 1 && y1 - y2 >= -1)) {
                cout << "YES";
                return 0;                
            }
            else if (abs(x1-x2) == abs(y1-y2)) {
                cout << "YES";
                return 0;                
            }
            else  if (x1 == x2 && y1 != y2 || y1 == y2 && x1 != x2){
                cout << "YES";
                return 0;
            }
            else if (x1 == x2 || y1 == y2){
                cout << "YES";
                return 0;
            }             
            //else if (x1 == x2){
            //    cout << "YES";
            //    return 0;
            //}
            //else if (y1 == y2){
            //    cout << "YES";
            //    return 0;
            //}
        }
            //else {
            //    cout << "NO";
            //}
    }
    cout << "NO";
    //cout << q[7];
  // put your code here
  return 0;
}
