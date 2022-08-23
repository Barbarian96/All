// C++ implementation of simple method to find count of
// pairs with given sum.
#include <bits/stdc++.h>
using namespace std;

// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
int getPairsCount(int arr[], int n, int k)
{
	unordered_map<int, int> m;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (m.find(k - arr[i]) != m.end()) {
			count += m[k - arr[i]];
		}
		m[arr[i]]++;
	}
	return count;
}

// Driver function to test the above function
int main()
{
	int arr[] = { 1, 5, 7, -1, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 6;
	cout << "Count of pairs is "
		<< getPairsCount(arr, n, sum);
	return 0;
}
