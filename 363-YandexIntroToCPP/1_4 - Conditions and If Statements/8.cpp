/*
A chess rook moves horizontally or vertically. 
Two different chessboard cells are given, determine if the rook can get from the first cell to the second in one move.

Input data format
The program receives four numbers from 1 to 8 each as input, specifying the column number and row number first for the first cell, then for the second cell.

Output Format
The program should output YES if it is possible to get from the first cell to the second one with the move of the rook or NO otherwise.
*/


#include <iostream>
using namespace std;
int main() {
    int a, b, a2, b2;
    cin >> a >> b >> a2 >> b2;
    if (a == a2 && b != b2 || b == b2 && a != a2){
        cout << "YES";
    }
    else if (a == a2 && b == b2){
        cout << "YES";
    }
    else {
    cout << "NO";
    }
  return 0;
}
