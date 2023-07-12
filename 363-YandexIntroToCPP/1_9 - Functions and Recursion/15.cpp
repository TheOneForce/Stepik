/*
There are n floors in the skyscraper. It is known that if you drop a glass ball from the floor number p, and the ball breaks, then if you drop the ball from the floor number p + 1, it will also break. 
It is also known that when thrown from the top floor, the ball always breaks.
You want to determine the minimum floor number when dropped from which the ball breaks. 
To conduct experiments, you have two balls. 
You can break them all down, but as a result, you have to determine this number absolutely accurately.
Determine how many throws are enough to knowingly solve this problem.

Input data format
The program receives the number of floors in a skyscraper as input.

Output Format You want to output the smallest number of throws at which you can always solve the problem.

Note
Comment on the first example. 
You need to throw the ball from the 2nd floor. 
If it breaks, then we will throw the second ball from the 1st floor, and if it does not break, then we will throw the ball from the 3rd floor.

Tips
1. What should I do if there was only one ball?
2. Let there be two balls and we threw one ball from floor number k. How will we act depending on whether the ball breaks or not?
3. Let f(n) be the minimum number of throws for which you can determine the desired floor if there were n floors in a skyscraper. Express f(n) in terms of f(a) values for smaller values of a.
*/



#include <iostream>
using namespace std;
int throws(int i) {
    if (i == 0) return 1;
    else return i + throws(i - 1);
}
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (throws(i) < n) {
        i++;
    }
    cout << i;
    return 0;
}
