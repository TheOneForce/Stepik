/*
During the Olympiad, each of the participants received their own identification number - a natural number. It is necessary to sort the list of participants of the Olympiad by the number of points they scored.

Input
The first line shows the number N (1 ≤ N ≤ 1000) - the number of participants. On each next line, the identification number and the number of points scored by the corresponding participant are given. All numbers in the input file do not exceed 10^5.

Output
In the output file, output the original list in descending order of points. If some participants have the same scores, then they need to be ordered among themselves in ascending order of the identification number.
*/



#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <pair <int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int id, score;
        cin >> id;
        cin >> score;
        a[i] = {-score, id};
    }
    sort(a.begin(), a.end());
    for (auto now : a) {
        cout << now.second << " " << -now.first << endl;
    }
    return 0;
}
