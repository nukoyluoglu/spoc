#include <bits/stdc++.h>

using namespace std;

int n, wp[55], dg[55], sg[55];
string name[55];
bool cmp(int a, int b) 
	{ if (wp[a] != wp[b]) { return wp[a] > wp[b]; }
	if (dg[a] != dg[b]) { return dg[a] > dg[b]; }
	return sg[a] > sg[b];
}
int main() 
	{ cin >> n;
	for (int i = 0; i < n; i++) { cin >> name[i]; }
	for (int i = 0; i < n * (n - 1) / 2; i++) 
		{ string s, a, b;
		int p, q;
		char c;
		cin >> s >> p >> c >> q;
		a = s.substr(0, s.find('-'));
		b = s.substr(s.find('-') + 1);
		int a1 = find(name, name + n, a) - name, b1 = find(name, name + n, b) - name;
		if (p > q) 
			{ wp[a1] += 3;
		}  else if (q == p) 
			{ wp[a1]++;
			wp[b1]++;
		}  else 
			{ wp[b1] += 3;
		}
		dg[a1] += p - q;
		sg[a1] += p;
		dg[b1] += q - p;
		sg[b1] += q;
	}
	int a[55];
	for (int i = 0; i < n; i++) { a[i] = i; }
	sort(a, a + n, cmp);
	string ans[55];
	for (int i = 0; i < n / 2; i++) { ans[i] = name[a[i]]; }
	sort(ans, ans + n / 2);
	for ( int i = 0 ; i < n / 2 ; i ++ ) { cout << ans [ i ] << endl ; }
	return 0;
}
