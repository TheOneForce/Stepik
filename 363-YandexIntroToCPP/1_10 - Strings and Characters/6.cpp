/*
A string containing spaces is given. Find out how many words are in it (a word is a sequence of non-whitespace characters, words are separated by one space, the first and last character of the string is not a space).

Input
Several lines are fed to the input.

Output
It is necessary to display the number of words in the first of the entered lines.

Note
In this task, the find method with two parameters can be useful. The first of them is the desired substring, the second is the position from which you need to look for the first occurrence.
*/



#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int c = 0, pos = 0;
    while (1) {
        pos = str.find(" ", pos);
        if (pos > str.size()) break;
        pos++;
        c++;
    }
    c++;
    cout << c;
    return 0;
}