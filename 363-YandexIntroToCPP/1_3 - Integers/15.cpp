/*
Symmetric number


A four-digit number is given. Determine whether its decimal notation is symmetrical. If the number is symmetrical, then print 1, otherwise print any other integer. The number can have less than four digits, then you need to assume that its decimal notation is supplemented on the left with insignificant zeros.

Input data format
The singular is entered.

Output Format
Print one integer - the answer to the problem.
*/


#include <iostream>
using namespace std;

int main()
{
	int a, b, n;
	cin >> n;
	a = (n / 1000 - n % 10);
	b = (((n % 1000) / 100) - ((n % 100) / 10));
	cout << a * a + b * b + 1;
	return 0;
}
