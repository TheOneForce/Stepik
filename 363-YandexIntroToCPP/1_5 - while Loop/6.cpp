/*
The natural number N is given. Print the word YES if the number N is the exact power of two, or the word NO otherwise.

Input data format
A natural number is entered.

Output Format
Display the answer to the problem.
*/



#include <iostream>
using namespace std;
int main() {
  int x, i = 1, n = 1;
  cin >> x;
  while(i <= x) {
    i = i * 2;
    if (i <= x) {
        n = i;
    }
  }
  if (n == x) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n & (n - 1)) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}
*/
