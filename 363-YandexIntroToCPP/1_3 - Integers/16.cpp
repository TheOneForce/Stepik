/*
Snail

Input data format
The program receives as input integer non-negative numbers H, A, B, and H > B. Numbers do not exceed 100.

Output Format
The program should output one natural number. It is guaranteed that A > B.
*/


#include <iostream>
using namespace std;

int main()
{
    int h, a, b, t;
    cin >> h >> a >> b;
    t = (h - b - 1) / (a - b) + 1;
    cout << t;
    return 0;
}
