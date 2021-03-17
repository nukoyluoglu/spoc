#include <bits/stdc++.h>

using namespace std;

const int N = 6e5 + 10;
int v[N], A[N], B[N];
int n;
void dfs(int x) 
	{ if (v[x]) return;
	v[x] = 1;
	dfs(A[x]);
}
int main() 
	{ cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; ++i) cin >> A[i];
	for (int i = 1; i <= n; ++i) cin >> B[i];
	for (int i = 1; i <= n; ++i) 
		{ if (v[i] == 0) dfs(i), ++ans;
	}
	int t = 1;
	for (int i = 1; i <= n; ++i) 
		{ if (B[i]) t ^= 1;
	}
	if (ans == 1) --ans;
	cout << ans + t << endl ;
}
