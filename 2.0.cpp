// A Naive Recursive C++ program 
// to count derangements
#include <bits/stdc++.h>
using namespace std;

int countDer(int n)
{
// Base cases
if (n == 1) return 0;
if (n == 2) return 1;

// countDer(n) = (n-1)[countDer(n-1) + der(n-2)]
return (n - 1) * (countDer(n - 1) + countDer(n - 2));
}

// Driver Code
int main()
{
	int n = 4;
	cout << "Count of Derangements is "
		<< countDer(n);
	return 0;
}

// Time Complexity: O(2^n) since T(n) = T(n-1) + T(n-2) which is exponential.

// Auxiliary Space: O(h) where h= log n is the maximum height of the tree.