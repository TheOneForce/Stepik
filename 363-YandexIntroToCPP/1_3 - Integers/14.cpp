/*
Moscow Ring Road

Input data format
 The program receives as input the integers V and T. If V > 0, then Vasya moves in the positive direction along the Moscow Ring Road, if the value of V < 0, then in the negative. 0 

≤
T ≤ 1000, -1000 ≤ V ≤ 1000

Output Format
The program should display an integer from 0 to 108 - the number of the mark at which Bob will stop.
*/


#include <iostream>
using namespace std;
​
int main()
{
    int V, T, S = 109;
    cin >> V >> T;
    cout << (S + (V * T % S)) % S;
    return 0;
}
