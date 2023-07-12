/*
On the Internet, each computer is assigned a four-byte code, which is usually written in the form of four numbers, each of which can take values from 0 to 255, separated by dots. Here are examples of valid IP addresses:
127.0.0.0
192.168.0.1
255.0.255.255
Write a program that determines whether a given string is a valid IP address.

Input
The program receives a string of arbitrary characters as input.

Output
If this string is a valid IP address entry, print YES, otherwise print NO.

Note
To translate from a string to a number, it is convenient to use the stoi function, which takes a string as input and returns a number.
*/



#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> parts;
    string input;
    int dots = 0, nums = 0;
    getline(cin, input);
    string temp = "";
    for (int i = 0; i < input.size(); i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            temp += input[i];
            nums++;
        }
        else if (input[i] == '.') {
            if (temp.size() > 3 || temp.size() == 0 || stoi(temp) > 255) {
                cout << "NO";
                return 0;
            }
            parts.push_back(temp);
            parts.push_back(".");
            dots++;
            temp = "";
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    if (temp.size() > 3 || temp.size() == 0 || stoi(temp) > 255) {
        cout << "NO";
        return 0;
    }
    parts.push_back(temp);
    temp = "";

    if (dots != 3) cout << "NO";
    else cout << "YES";
    return 0;
}
