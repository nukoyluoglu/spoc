#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, k;
	cin >> n >> k;
	pair<int, int> A[n + 1];
	for (int i = 1; i <= n; i++) 
		{ cin >> A[i].first >> A[i].second;
		A[i].first *= -1;
	}
	sort(A + 1, A + n + 1);
	int ans = 0;
	for (int i = 1; i <= n; i++)
		{ if (A[i] == A[k]) ans++;
	} cout << ans <<'\n';

	return 0;
}
