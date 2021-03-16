#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5, MAX = 3e7, MOD = 1e9 + 7;
int n, p;
string a[N];
long long ans;
int main() 
	{ cin >> n >> p;
	for (int i = 0; i < n; i++) cin >> a[i];
	long long curr = 0;
	for (int i = n - 1; i >= 0; i--) 
		{ if (a[i] == "half") 
			{ ans += curr * p;
			curr *= 2;
		}  else 
			{ ans += curr * p;
			ans += p / 2;
			curr *= 2;
			curr++;
		}
	}
	cout << ans <<'\n';

}
