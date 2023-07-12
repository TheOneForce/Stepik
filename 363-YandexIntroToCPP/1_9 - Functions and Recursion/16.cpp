/*
The number N is given. Determine how many ways you can place on the board N×N N queens that do not beat each other.

Input data format
Given singular N. (N ≤ 10)

Output Format
Display the answer to the problem.

Hint
Write a recursive function that tries to put the queen in the next column. 
If you can't put a queen on this cell (it beats the previous ones), then this option should not even be considered. 
When you have successfully put the queen in the last column, increase the counter.
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int board[10][10] = {0};
int solutions = 0;

vector <int> columns;
vector <int> posDiag; // (r + c)
vector <int> negDiag; // (r - c)

bool check(int row, int n) {
    if (row == n) {
        solutions++;
        return true;
    }
    for (int col = 0; col < n; col++) {
        bool isInColumns = find(columns.begin(), columns.end(), col) != columns.end();
        bool isInPosDiag = find(posDiag.begin(), posDiag.end(), (row + col)) != posDiag.end();
        bool isInNegDiag = find(negDiag.begin(), negDiag.end(), (row - col)) != negDiag.end();
        
        if (!(isInColumns || isInPosDiag || isInNegDiag)) {
            columns.push_back(col);
            posDiag.push_back(row + col);
            negDiag.push_back(row - col);
            board[row][col] = 1;
            
            check(row + 1, n);
            
            columns.pop_back();
            posDiag.pop_back();
            negDiag.pop_back();
            board[row][col] = 0;
        } 
    }
    
}

int main() {
    int n;
    cin >> n;
    check(0, n);
    cout << solutions;
    return 0;
}
