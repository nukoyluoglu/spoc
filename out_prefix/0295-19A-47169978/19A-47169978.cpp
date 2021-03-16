#include <bits/stdc++.h>

using namespace std;

string nam[50];
int n, wp[50], dg[50], sg[50];
bool comp(int a, int b) 
	{ if (wp[a] != wp[b])
		{ return wp[a] > wp[b];
	} else if (dg[a] != dg[b])
		{ return dg[a] > dg[b];
	} else
		{ return sg[a] > sg[b];
} }
int main() 
	{ cin >> n;
	for (int i = 0; i < (int)(n); i++) cin >> nam[i];
	for (int i = 0; i < (int)(n * (n - 1) / 2); i++) 
		{ string tmp, a, b;
		int p, q;
		char c;
		cin >> tmp >> p >> c >> q;
		a = tmp.substr(0, tmp.find('-'));
		b = tmp.substr(tmp.find('-') + 1);
		int ai = find(nam, nam + n, a) - nam, bi = find(nam, nam + n, b) - nam;
		if (p > q)
			{ wp[ai] += 3;
		} else if (p < q)
			{ wp[bi] += 3;
		} else
			{ wp[ai]++, wp[bi]++;
		} dg[ai] += p - q, sg[ai] += p, dg[bi] += q - p, sg[bi] += q;
	}
	int a[50];
	for (int i = 0; i < (int)(n); i++) a[i] = i;
	sort(a, a + n, comp);
	string names[50];
	for (int i = 0; i < (int)(n / 2); i++) names[i] = nam[a[i]];
	sort(names, names + n / 2);
	for ( i = 0 ; i < n / 2 ; i ++ ) { cout << names [ i ] << endl ; }

	return 0;
}
