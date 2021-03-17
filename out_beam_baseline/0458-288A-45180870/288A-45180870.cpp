#include <bits/stdc++.h>

using namespace std;

long long a[10001], b, d, sum, i, n, resh, ans1, ans2, ans3, ans4, j, k;
string s, s1;
char c[10001];
int main() 
	{ cin >> n >> k;
	if (n < k or (k == 1 and n > 1)) return cout << -1 << "\n", 0;
	if (n == 1) return cout << "a\n", 0;
	for (int i = 0; i < (n - (k - 2)) / 2; ++i) cout << "ab";
	if ((n - (k - 2)) % 2) cout << "a";
	for (int i = 0; i < k - 2; ++i) cout << char(i + 'c');
	cout << endl ;
	return 0;
}
