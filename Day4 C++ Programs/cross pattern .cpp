// Program to make an X shape $ pattern in c++
#include <iostream>
using namespace std;

void printPattern(int& n)
{
	// Print all rows one by one
	for (int i = 1; i <= n; i++) {

		// Print characters of current row
		for (int j = 1; j <= n; j++) {

			if (j == i || j == (n + 1 - i))
				cout << "$";
			else
				cout << " ";
		}

		// Print a newline before printing the
		// next row.
		cout << endl;
	}
}

// Driver Code
int main()
{
	// n denotes the number of lines in which
	// we want to make X pattern
	int n = 6;

	// Function Call
	printPattern(n);
	return 0;
}

