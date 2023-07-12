/*
Print the names and surnames of the students in descending order of their GPA.

Input
The number of students n is given first, then n lines, each of which contains a last name, first name and three numbers (grades in three subjects: mathematics, physics, computer science). The data in the string is separated by a single space. Scores range from 1 to 5.

Output
It is necessary to display the last name-first name pairs, one per line, separating the last name and first name with one space. You don't need to display ratings. If several students have the same average scores, then they must be displayed in the order specified in the input data.
*/



#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct student {
    string name, surname;
    int mat, phy, inf;
};

bool cmp(student a, student b) {
    return (a.phy + a.mat + a.inf) > (b.phy + b.mat + b.inf);
}

int main() {
    int n;
    cin >> n;
    vector <student> a(n);
    for (int i = 0; i < n; i++) {      
        string name, surname;
        int mat, phy, inf;
        
        cin >> name >> surname >> mat >> phy >> inf;
        
        student student_temp;
        
        student_temp.name = name;
        student_temp.surname = surname;
        student_temp.mat = mat;
        student_temp.phy = phy;
        student_temp.inf = inf;
        
        a[i] = student_temp;
    }
    stable_sort(a.begin(), a.end(), cmp);
    for (auto now : a) {
        cout << now.name << " " << now.surname << endl;
    }
    return 0;
}
