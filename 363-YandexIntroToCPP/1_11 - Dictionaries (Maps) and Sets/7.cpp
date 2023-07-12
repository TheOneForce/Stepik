/*
You are given a dictionary consisting of pairs of words. Each word is synonymous with a paired word. All the words in the dictionary are different. For one given word, determine its synonym.

Input
The program receives as input the number of pairs of synonyms N. This is followed by N lines, each line contains exactly two synonym words. This is followed by one word.

Output
The program should display a synonym for this word.
*/



#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int n;
    map <string, string> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        s[a] = b;
    }
    string x;
    cin >> x;
    for (auto now : s) {
        //cout << now.first << " " << now.second << "\n";
        if (now.first == x) {
            cout << now.second;
            break;
        }
        else if (now.second == x) {
            cout << now.first;
            break;
        }
    }
  return 0;
}
