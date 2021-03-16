#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, arr[103], s, t, len1 = 0, len2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	cin >> s >> t;
	if (s > t) swap(s, t);
	for (int i = s - 1; i < t - 1; i++) len1 += arr[i];
	int f = n - t + s;
	int tt = t - 1;
	while (f--) 
		{ if (tt % n == 0) tt = 0;
		len2 += arr[tt];
		tt++;
	}
	cout << min ( len1, len2 ) << endl ;

	return 0;
}
