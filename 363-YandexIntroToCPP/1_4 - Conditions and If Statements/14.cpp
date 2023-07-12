/*
Yasha swam in a pool measuring N×M meters and was tired. 
At this point, he found that he was at a distance of X meters from one of the long sides (not necessarily from the closest) and Y meters from one of the short sides. 
What is the minimum distance Yasha must swim to get out of the pool on the side?

Input data format
The program receives the numbers N, M, X, Y as input.

Output Format
The program should display the number of meters that Yasha needs to swim to the side.
*/


#include <iostream>
using namespace std;
int main() {
    int N, M, X, Y, X2, Y2;
    cin >> N >> M >> X >> Y;
    if (N <= M) {
        M = N + M;
        N = M - N;
        M = M - N;
    }
    X2 = abs(N - Y);
    Y2 = abs(M - X);
if (X <= X2) {
        if (Y <= Y2) {
            if (X <= Y) {
                cout << X;
            }
            else {
                cout << Y;
            }
        }
        else {
            if (X <= Y2) {
                cout << X;
            }
            else {
                cout << Y2;
            }
        }
    }
    else {
        if (Y <= Y2) {
            if (X2 <= Y) {
                cout << X2;
            }
            else {
                cout << Y;
            }
        }
        else {
            if (X2 <= Y2) {
                cout << X2;
            }
            else {
                cout << Y2;
            }
        }
    }
    return 0;
}
