#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, m, i, j, p, q, cnt, c1, c2, x, y, mn;
	string s;
	while (cin >> n >> c1 >> c2) 
		{ getchar();
		cin >> s;
		cnt = 0;
		mn = LONG_LONG_MAX;
		for (i = 0; i < s.size(); i++) 
			{ if (s[i] == '1') cnt++;
		}
		for (i = 1; i <= cnt; i++) 
			{ x = n / i;
			y = n % i;
			p = (c1 + c2 * (x - 1) * (x - 1)) * (i - y);
			q = (c1 + (c2 * x * x)) * y;
			m = p + q;
			mn = min(mn, m);
		}
		cout << mn << endl ;
	}
}
