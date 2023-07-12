/*
Determine the smallest distance between the two local maxima of a sequence of natural numbers ending with the number 0. If there are no two local maxima in the sequence, print the number 0.
In this case, the initial and final values are not considered local maxima.
Distance is the number of spaces between elements. For an example, see the first test.

Input data format
A sequence of integers ending with the number 0 is introduced (the number 0 itself is not included in the sequence, but serves as a sign of its completion).

Output Format
Display the answer to the problem.
*/



#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int prev, cur, next;
    int dist = 0;
    int cur_dist = 0;
    int min_dist = 0;

    if (cin >> prev && prev != 0) {
        if (cin >> cur && cur != 0) {
            if (cin >> next) {
                int pos = 2;
                while (next != 0) {
                    if (prev < cur && cur > next) {
                        if (dist != 0) {
                            cur_dist = pos - dist;
                            if (min_dist == 0) {
                                min_dist = cur_dist;
                            }
                            else {
                                min_dist = min(cur_dist, min_dist);
                            }
                        }

                        dist = pos;
                    }
                    ++pos;
                    prev = cur;
                    cur = next;
                    cin >> next;
                }
            }
        }
    }

    cout << min_dist;

    return 0;
}
