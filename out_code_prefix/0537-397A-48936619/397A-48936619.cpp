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
		for (int i = x; i < y; i++) arr[i]++;
	}
	int ans = 0;
	for (int i = l; i < r; i++)
		{ if (arr[i] == 0) ans++;
	} cout << ans << endl ;

	return 0;
}
