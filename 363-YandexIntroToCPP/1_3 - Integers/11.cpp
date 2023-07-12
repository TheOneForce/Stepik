/*
Buying pies


A pie in the dining room costs A rubles and B kopecks. Determine how many rubles and kopecks you need to pay for N pies.

Input data format
The program receives three numbers as input: A, B, N - integer, positive, do not exceed 10000.

Output Format
The program should display two numbers separated by a space: the purchase price in rubles and kopecks.
*/


#include <iostream>
using namespace std;
int main()
{
    int a, b, n, r, k, o;
        cin >> a >> b >> n;
        k = (b * n) % 100;
        o = (b * n) / 100;
        r = (a * n) + o;
        cout << r << " " << k;
    return 0;
}
