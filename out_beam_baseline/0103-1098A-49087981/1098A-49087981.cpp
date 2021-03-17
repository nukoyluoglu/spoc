#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	long long int s[n], ms[n], p[n], v[n];
	p[0] = 0;
	for (int i = 1; i < n; --p[i++]) cin >> p[i];
	for (int i = 0; i < n; ++i) 
		{ cin >> s[i];
		ms[i] = s[i];
	}
	for (int i = n - 1; i > 0; --i) 
		{ if (ms[i] < 0) continue;
		if (s[p[i]] < 0 && (ms[p[i]] < 0 || ms[p[i]] > ms[i])) ms[p[i]] = ms[i];
	}
	if (ms[0] < 0) ms[0] = 0;
	long long int sum = ms[0];
	for (int i = 1; i < n; ++i) 
		{ if (ms[i] < 0)
			{ ms[i] = ms[p[i]];
		} else if (ms[i] < ms[p[i]]) 
			{ cout << -1 << endl;
			return 0;
		}  else
			{ sum += ms[i] - ms[p[i]];
	} }
	cout << sum << endl ;
	return 0;
}
