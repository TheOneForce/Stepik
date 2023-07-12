/*
Time difference

Input data format
The program receives three integers as input: hours, minutes, seconds, which specify the first moment in time and three integers, which specify the second moment in time.

Output Format
Print the number of seconds between these time points.
*/


#include <iostream>
using namespace std;
int main()
{
    int n, h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    n = abs(((h1 * 3600) + (m1 * 60) + s1)-((h2 * 3600) + (m2 * 60) + s2));
    cout << n;
    return 0;
}
