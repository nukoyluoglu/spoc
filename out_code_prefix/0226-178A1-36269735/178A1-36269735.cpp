#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	long long arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	long long N = 0;
	for (int i = 0; i < n - 1; i++) 
		{ int t = floor(log2(n - i - 1));
		N = N + arr[i];
		int j = i + pow(2, t);
		arr[j] += arr[i];
		arr[i] = 0;
		cout << N << endl ;

	}
	return 0;
}
