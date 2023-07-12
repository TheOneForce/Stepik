/*
Two valid ones are given x and y. Check whether the point with coordinates (x, y) belongs to the shaded square (including it border). If the point belongs to a square, print the word YES, otherwise print In the figure, the grid is drawn in increments of 1.
https://ucarecdn.com/8556d50b-63d6-4ed9-8499-a5accab147dd/
The solution should contain IsPointInSquare(x, y) function, which returns True if the point belongs to square and False if it does not belong. The main program should consider the coordinates of the point, call the IsPointInSquare function, and depending on the of the returned value to display the desired message.
IsPointInSquare Function must not contain an if statement.

Input data format
Two real numbers are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <cmath>
using namespace std;
/*double abs(double a) {
    return (a*a)/2;
}*/
bool IsPointInSquare(double x, double y) {
    return (fabs(x) + fabs(y) <= 1);
}

int main() {
    double x, y;
    cin >> x >> y;
    if (IsPointInSquare(x, y)) cout << "YES";
    else cout << "NO";
  return 0;
}
