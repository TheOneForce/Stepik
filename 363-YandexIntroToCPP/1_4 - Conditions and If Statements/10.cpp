/*
A chess bishop walks diagonally. 
Given two different squares of the chessboard, determine if the bishop can get from the first cell to the second in one move.

Input data format
The program receives four numbers from 1 to 8 each as input, specifying the column number and row number first for the first cell, then for the second cell.

Output Format
The program should output YES if you can get from the first cell with the move of the bishop to the second or NO otherwise.
*/


#include <iostream>

using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if ( (x1-x2)*(x1-x2) == (y1-y2)*(y1-y2)) {
        cout << "YES";
      }
    else {
        cout << "NO";
    }
    return 0;
}
