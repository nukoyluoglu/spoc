#include <bits/stdc++.h>

using namespace std;

const long long int MOD = 1000000007;
long long int N, M, K, H, W, L, R;
int main() 
	{ cin >> N;
	vector<int> v(N + 1);
	for (int i = 1; i <= N; i++) cin >> v[i];
	M = accumulate(v.begin(), v.end(), 0);
	for (int i = 1; i <= N; i++) v[i] += v[i - 1];
	cin >> L >> R;
	if (L > R) swap(L, R);
	cout << min ( ( v [ R - 1 ] - v [ L - 2 ] ), ( M ) - ( V [ R- 1 ] + v [ M - i ] ) ) << "\n" ;

	return 0;
}