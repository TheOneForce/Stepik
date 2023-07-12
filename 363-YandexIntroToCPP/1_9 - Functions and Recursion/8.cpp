/*
Check if the point belongs to this shaded area:
https://ucarecdn.com/2b592fad-d9c1-4b91-8cac-9fc4896ad47b/
If the point belongs to an area (the area includes boundaries), print the word YES, otherwise print the word NO.The solution must contain an IsPointInArea(x, y) function that returns True if the point belongs to the area and False if it does not.
The main program must read the coordinates of the point, call the IsPointInArea function and, depending on the returned value, display the necessary message.
The IsPointInArea function must not contain an if statement.

Input data format
Two real numbers are entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <cmath>
using namespace std;
// y = -x                  // line 1
// y = (x+1) * 2 = 2*x + 2 // line 2
// (x+1)^2 + (y-1)^2 = 2   // circle
bool IsPointInCircle(double x, double y) {
    double r = 2;
    double xc = -1;
    double yc = 1;
    return (pow((y - yc), 2) + pow((x - xc), 2)) < (pow(r, 2));
}
bool IsPointInsideCircle(double x, double y) {
    double r = 2;
    double xc = -1;
    double yc = 1;
    return (pow((y - yc), 2) + pow((x - xc), 2)) <= (pow(r, 2));
}
bool IsPointInArea(double x, double y) {
    bool IsHigherLine1 = (y + x >= 0);
    bool IsLowerLine1 = (y + x <= 0);
    bool IsHigherLine2 = (2 * x + 2 - y <= 0);
    bool IsLowerLine2 = (2 * x + 2 - y >= 0);

    return (IsPointInsideCircle(x, y) && (IsHigherLine1 && IsHigherLine2)) || (!IsPointInCircle(x, y) && (IsLowerLine1 && IsLowerLine2));
}
int main() {
    double x, y;
    cin >> x >> y;
    if (IsPointInArea(x, y)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
