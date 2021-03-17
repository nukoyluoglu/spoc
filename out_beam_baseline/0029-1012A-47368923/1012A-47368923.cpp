#include <bits/stdc++.h>

using namespace std;

long long in[200010];
int n, n2;
long long ans;
int main() 
	{ cin >> n;
	n2 = n * 2;
	for (int i = 0; i < n2; i++) cin >> in[i];
	sort(in, in + n2);
	ans = (in[n - 1] - in[0]) * (in[n2 - 1] - in[n]);
	for (int i = 1; i < n; i++) ans = min(ans, (in[n - 1 + i] - in[i]) * (in[n2 - 1] - in[0]));
	cout << ans <<'\n';
	return 0;
}
