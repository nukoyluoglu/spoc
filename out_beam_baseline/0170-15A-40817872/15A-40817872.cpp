#include <bits/stdc++.h>

using namespace std;

const double Pi = acos(-1.0);
int main() 
	{ int n, s;
	cin >> n >> s;
	int x, size;
	double start[1005], end[1005];
	memset(start, 0, sizeof(start));
	memset(end, 0, sizeof(end));
	for (int i = 0; i < n; i++) 
		{ cin >> x >> size;
		start[i] = x - size / 2.0;
		end[i] = x + size / 2.0;
	}
	sort(start, start + n);
	sort(end, end + n);
	int res = 2;
	for (int i = 0; i < n - 1; i++) 
		{ double gap = start[i + 1] - end[i];
		if (s < gap) { res += 2; }
		if (s == gap) { res++; }
	}
	cout << res << "\n" ;
	return 0;
}
