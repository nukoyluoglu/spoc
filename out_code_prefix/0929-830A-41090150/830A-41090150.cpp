#include <bits/stdc++.h>

using namespace std;

int n, k, p;
long long person[1005], key[2005];
long long ans, tmp;
int main() 
	{ while (cin >> n >> k >> p) 
		{ ans = 99999999999999LL;
		for (int i = 0; i < n; i++) { cin >> person[i]; }
		for (int i = 0; i < k; i++) { cin >> key[i]; }
		sort(person, person + n);
		sort(key, key + k);
		for (int i = 0; i + n <= k; i++) 
			{ tmp = 0;
			for (int j = 0; j < n; j++) { tmp = max(tmp, abs(key[i + j] - person[j]) + abs(p - key[i + j])); }
			ans = min(tmp, ans);
		}
		cout << ans << endl ;

	}
	return 0;
}
