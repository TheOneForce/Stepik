/*
Number of tens
Given a non-negative integer N, determine the number of tens in it (the penultimate digit of the number). If there is no penultimate digit, then we can assume that the number of tens is zero.

Input data format
The input is given a positive integer N (0 ≤ N ≤ 1000000).

Output Format
Print one integer - the answer to the problem.
*/


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << (n / 10) % 10;
    return 0;
}
