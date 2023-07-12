/*
Desks

Input data format
The program receives three non-negative integers as input: the number of students in each of the three classes (numbers do not exceed 1000).

Output Format
Print one integer - the answer to the problem.
*/


#include <iostream>
using namespace std;
int main() 
{
    int a, b, c, x, y, z;
        cin >> a >> b >> c;
        x = a / 2 + a % 2;
        y = b / 2 + b % 2;
        z = c / 2 + c % 2;
        cout << x + y + z;
    return 0;
}
