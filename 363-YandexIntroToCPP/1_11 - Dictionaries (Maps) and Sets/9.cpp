/*
The teacher gave Petya homework - to place accents in words in the given text, after which she instructed Vasya to check this homework. Vasya is very unfamiliar with this topic, so he found a dictionary that indicates how to put stress in words. Unfortunately, not all words are present in this dictionary. Vasya decided that in words that are not in the dictionary, he will assume that Peter put the accents correctly, if in this word Petya put exactly one stress.
It turned out that in some words the stress can be put in more than one way. Vasya decided that in this case, if the way Peter put the accent corresponds to one of the variants given in the dictionary, he will count it as the correct placement of the stress, and if it does not match, then as an error.
You are given the dictionary that Vasya used and the homework handed over by Petya. Your task is to determine the number of errors that Bob will count in this task.

Input
First, the number N is entered - the number of words in the dictionary (0 ≤ N ≤ 20000).
Next comes N lines with words from the dictionary. Each word consists of no more than 30 characters. All words consist of small and capital Latin letters. In each word, exactly one letter is capitalized - the one on which the stress falls. The words in the dictionary are arranged in alphabetical order. If there are several possibilities for placing stress in the same word, then these options in the dictionary are in random order.
Next comes the exercise performed by Petya. The exercise is a string of text, with a total volume of no more than 300000,30 characters. A string consists of words that are separated by exactly one space. The length of each word does not exceed <> characters. All words consist of small and capital Latin letters (capital letters indicate those letters over which Peter put the accent). Peter could mistakenly put more than one accent in a word or not put an accent at all.

Output
Display the number of errors in Petin's text that Bob will find.

Notes to sample examples
1. In the word cannot, according to the dictionary, there are two variants of stress. These variants in the dictionary can be listed in any order (i.e. cAnnot first, and then cannOt, and vice versa).
Two mistakes made by Peter are the words be (the stress is not placed at all) and fouNd (the stress is incorrect). The word thE is not in the dictionary, but since Peter put exactly one accent in it, it is recognized as correct.
2. Accents are incorrectly placed in all words except The (it is absent in the dictionary, it has exactly one stress). In the rest of the words, either all letters are stressed (in the word PAGE), or not a single accent is placed.

Sample Input 1:
4
cAnnot
cannOt
fOund
pAge
thE pAge cAnnot be fouNd

Sample Output 1:
2

Sample Input 2:
4
cAnnot
cannOt
fOund
pAge
The PAGE cannot be found

Sample Output 2:
4
*/



#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

string strToLower(string str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

bool isStressedRight(string str) {
    bool stress = false;
    for (int i = 0; i < str.size() + 1; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            if (stress) {
                return false;
            }
            stress = true;
        }
    }
    return stress;
}

int main() {
    set <string> dict;
    set <string> lowerDict;
    multiset <string> task;
    int n, mistakes = 0;
    cin >> n >> ws;

    // Filling in the (dictionary set)
    for (int i = 0; i < n; i++) {
        string word_temp;
        cin >> word_temp;
        dict.insert(word_temp);
        lowerDict.insert(strToLower(word_temp));
    }

    cin.ignore();
    string sentence;
    getline(cin, sentence);
    
    // Check if the sentence is empty
    if (sentence == "") {
        cout << mistakes;
        return 0;
    }

    // Break down the sentence into words and
    // put these words into the (task multiset)
    string task_word = "";
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            task.insert(task_word);
            task_word = "";
        }
        else task_word += sentence[i];
    }
    task.insert(task_word);
    task_word.clear();

    // Looking up the word in dictionary 
    for (auto a : task) {
        // Try to find the lowercased word in the lowercased dictionary
        if (lowerDict.find(strToLower(a)) != lowerDict.end()) {
            // Try to find the word with the stress in the dictionary
            if (dict.find(a) == dict.end()) {
                mistakes++;
            }
        }
        // If it has not been found
        // check if the stress is placed correctly
        else if (!isStressedRight(a)) {
            mistakes++;
        }
    }

    cout << mistakes;
    return 0;

}
