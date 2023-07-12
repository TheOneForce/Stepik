/*
The sum of the digits of a three-digit number

Input data format
The input is a number from 100 to 999.

Output Format
Print one integer - the answer to the problem.
*/


#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c;
        cin >> n;
        a = n / 100;
        b = n / 10 % 10;
        c = n / 1 % 10;
        cout << a + b + c;
    return 0;
}
