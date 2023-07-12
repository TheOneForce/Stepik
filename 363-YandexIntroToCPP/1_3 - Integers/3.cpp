/*
Squirrels and nuts - 1
N squirrels found K nuts and decided to divide them equally. Determine how many nuts each squirrel will get.

Input data format
Two positive integers N and K are given as input, each of which does not exceed 10000.

Output Format
Print one integer - the answer to the problem.
*/


#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    cout << k / n;
    return 0;
}
