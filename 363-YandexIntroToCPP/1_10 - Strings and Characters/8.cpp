/*
Find the longest word in this line and display it.

Input
A single line is entered. The words in it are separated by one space.

Output
Print the longest word. If there are several such words, then you need to display the one that occurs earlier.
*/



#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    str = str + " ";
    int pos = 0, prepos = 0, maxstart = 0, maxend = 0;
    while (pos < str.size()) {
        pos = str.find(" ", pos);
        if (pos > str.size()) break;
        if (pos - prepos > maxend - maxstart) {
            maxend = pos;
            maxstart = prepos;
        }
        pos++;
        prepos = pos;
    }
    for (int i = maxstart; i < maxend; i++) {
        cout << str[i];
    }
    return 0;
}
