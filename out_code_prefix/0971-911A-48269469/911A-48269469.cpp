#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int x;
	cin >> x;
	int ara[x];
	int maxn;
	set<int> s;
	maxn = 1000000009;
	int d = 1000000009;
	bool b = 0;
	for (int w = 0; w < x; w++) 
		{ cin >> ara[w];
		if (ara[w] < maxn) { maxn = ara[w]; }
	}
	for (int w = 0; w < x; w++) 
		{ if (ara[w] == maxn) { s.insert(w); }
	}
	set<int>::iterator i;
	set<int>::iterator j = s.end();
	j--;
	int l, m;
	for (i = s.begin(); i != s.end(); i++) 
		{ if (i == j) continue;
		m = *i;
		i++;
		l = *i;
		i--;
		if (l - m < d) d = (l - m);
	}
	cout << d << endl ;

	return 0;
}
