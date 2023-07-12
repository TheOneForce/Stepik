/*
One day, sorting through old books in the attic, a schoolboy Vasya found an English-Latin dictionary. By that time, he knew English perfectly, and his dream was to learn Latin. Therefore, the dictionary came across.
Unfortunately, only one dictionary is not enough for a full-fledged language study: in addition to English-Latin, Latin-English is needed. For lack of a better one, he decided to make a second dictionary out of the first.
As you know, the dictionary consists of translated words, each of which contains several translation words. For each Latin word found anywhere in the dictionary, Vasya suggests finding all its translations (that is, all the English words for which our Latin was found in his list of translations), and consider them and only their translations of this Latin word.
Help Vasya do the job of creating a Latin-English dictionary from English-Latin.

Input
The first line contains a single integer N - the number of English words in the dictionary. This is followed by N descriptions. Each description is contained in a separate line, in which the English word is written first, then a hyphen separated by spaces (symbol number 45), then comma-separated translations of this English word into Latin. Translations are sorted in lexicographic order. The order of English words in the dictionary is also lexicographic.
All words consist only of small Latin letters, the length of each word does not exceed 15 characters. The total number of words at the input does not exceed 100000.

Output
In the first line, the program should display the number of words in the corresponding Latin-English dictionary. From the second line, display the dictionary itself, exactly observing the format of the input data. In particular, the first should be the translation of the lexicographically minimal Latin word, then the second in this order, etc. Within the translation, English words should also be sorted lexicographically.
*/



#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    map <string, vector<string>> dict;
    map <string, vector<string>> dictReversed;
    int n;
    cin >> n >> ws;
    for (int i = 0; i < n; i++) {
        string string_temp;
        getline(cin, string_temp);
        string term_temp = "";
        string key;
        for (int j = 0; j < string_temp.size(); j++) {
            if (string_temp[j] == '-') {
                term_temp.erase(j - 1, 1);
                dict.insert(pair<string, vector<string>>(term_temp, NULL));
                key = term_temp;
                term_temp = "";
                j++;
            }
            else if (string_temp[j] == ',') {
                dict[key].push_back(term_temp);
                term_temp = "";
                j++;
            }
            else term_temp += string_temp[j];
        }
        dict[key].push_back(term_temp);

        for (auto now : dict[key]) {
            dictReversed.insert(pair<string, vector<string>>(now, NULL));
            dictReversed[now].push_back(key);
        }

    }

    cout << dictReversed.size() << endl;
    for (auto a : dictReversed)
    {
        cout << a.first << " - ";
        int count = 0;
        for (auto b : a.second) {
            cout << b;
            count++;
            if (count != a.second.size()) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}
