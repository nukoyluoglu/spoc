#include <bits/stdc++.h>

using namespace std;

const long long Mod = 1e9 + 7;
const double pi = 2 * acos(0.0);
const int N = 2e5 + 5;
int arr[N];
int main() 
	{ long long n, x, s = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> x;
		s += x;
	}
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	if (arr[n - 1] + arr[n - 2] >= s)
		{ cout << "YES" << endl;
	} else
		{ cout << "NO" << endl ;

	} return 0;
}
