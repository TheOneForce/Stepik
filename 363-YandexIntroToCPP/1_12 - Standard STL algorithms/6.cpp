/*
Print all origins in ascending order of their distances from the origin.

Input
The program receives a set of points on the plane as input. First, the number of points n is given, then there is a sequence of n lines, each of which contains two numbers: the coordinates of the point. The size of n does not exceed 100, all the original coordinates are integers that do not exceed 10^3.

Output
It is necessary to display all starting points in ascending order of their distances from the origin.
*/



#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>
using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b) {
    return hypot(a.first, a.second) < hypot(b.first, b.second);
}

int main() {
    int n;
    cin >> n;
    vector <pair <int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int x;
        int y;
        cin >> x;
        cin >> y;
        a[i] = { x, y };
    }
    sort(a.begin(), a.end(), cmp);
    for (auto now : a) {
        cout << now.first << " " << now.second << endl;
    }
    return 0;
}
