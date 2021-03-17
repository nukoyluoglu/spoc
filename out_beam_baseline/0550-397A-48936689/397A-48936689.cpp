#include <bits/stdc++.h>

using namespace std;

int arr[1000];
int main() 
	{ int n;
	cin >> n;
	int l, r;
	cin >> l >> r;
	n--;
	while (n--) 
		{ int x, y;
		cin >> x >> y;
		for (int i = y; i > x; i--) arr[i]++;
	}
	int ans = 0;
	for (int i = r; i > l; i--)
		{ if (arr[i] == 0) ans++;
	} cout << ans << endl ;
	return 0;
}
