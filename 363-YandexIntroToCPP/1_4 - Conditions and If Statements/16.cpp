/*
There are two boxes, the first is size A1×B1×C1, the second size A2×B2×C2. 
Determine if one of these boxes can be placed inside the other, provided that the boxes can only be rotated 90 degrees around the ribs.

Input data format
The program receives the number A as input1, B1, C1, A2, B2, C2.

Output Format
The program should output one of the following lines:
"Boxes are equal" if the boxes are the same, 
"The first box is smaller than the second one", if the first box can be put in the second, 
"The first box is larger than the second one", if the second box can be put in the first, 
"Boxes are incomparable" in any other case.
*/


#include <iostream>
using namespace std;
int main() {
    int a1, b1, c1, a2, b2, c2, k;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    /////////sorting
    ////////////////1st
    if (a1 > b1) {
        a1 = b1 + a1;
        b1 = a1 - b1;
        a1 = a1 - b1;
    }
    if (b1 > c1) {
        b1 = c1 + b1;
        c1 = b1 - c1;
        b1 = b1 - c1;
    }
    if (a1 > b1) {
        a1 = b1 + a1;
        b1 = a1 - b1;
        a1 = a1 - b1;
    }
    ////////////////2nd
    if (a2 > b2) {
        a2 = b2 + a2;
        b2 = a2 - b2;
        a2 = a2 - b2;
    }
    if (b2 > c2) {
        b2 = c2 + b2;
        c2 = b2 - c2;
        b2 = b2 - c2;
    }
    if (a2 > b2) {
        a2 = b2 + a2;
        b2 = a2 - b2;
        a2 = a2 - b2;
    }
    ////////////////////////////
    
    if (a1 == a2 && b1 == b2 && c1 == c2) {
        cout << "Boxes are equal";
    }
    
    else if ( (a1 > a2 || b1 > b2 || c1 > c2) && ( (a1 < a2 || b1 < b2 || c1 < c2) == 0)
       ) {
        cout << "The first box is larger than the second one";
    }

    else if ( (a1 < a2 || b1 < b2 || c1 < c2) && ( (a1 > a2 || b1 > b2 || c1 > c2) == 0)) {
        cout << "The first box is smaller than the second one";
    }
    else {
        cout << "Boxes are incomparable";
    }
    
    //cout << endl << a1 << b1 << c1 << a2 << b2 << c2;
  return 0;
}
