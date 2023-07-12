/*
The next even-numbered
The input is the natural number N. Print the next even number

Input data format
The input is given a positive integer N, not exceeding 10000.

Output Format
Print one integer - the answer to the problem.
*/


#include <iostream>
using namespace std;
int main()
{
    int n;
        cin >> n;
        cout << (n / 2) * 2 + 2;
    return 0;
}
