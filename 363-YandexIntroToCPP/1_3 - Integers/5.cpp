/*
The last digit
Given a natural number, print its last digit.

Input data format
The input is given a natural number N that does not exceed 10000.

Output Format
Print one integer - the answer to the problem.
*/


#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << n % 10;
    return 0;
}
