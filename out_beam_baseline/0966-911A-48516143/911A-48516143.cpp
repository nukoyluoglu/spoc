#include <bits/stdc++.h>

using namespace std;

long long a[200050];
long long b[200050];
int len = 0;
int main() 
	{ int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	long long minn = 1000000009;
	for (int i = 0; i < n; i++) { minn = min(minn, a[i]); }
	for (int i = 0; i < n; i++) 
		{ if (a[i] == minn) 
			{ b[len] = i;
			len++;
		}
	}
	long long minnn = 200000050;
	for (int i = 1; i < len; i++) { minnn = min(minnn, b[i] - b[i - 1]); }
	cout << minnn << endl ;
	return 0;
}
