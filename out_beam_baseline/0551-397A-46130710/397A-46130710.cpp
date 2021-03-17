#include <bits/stdc++.h>

using namespace std;

void File() 
	{ freopen("output.txt", "w", stdout);
	freopen("input.txt", "r", stdin);
}
void fast() {}
const double pi = 2 * acos(0.0);
const int nn = 2e5 + 5;
const int oo = 0x3f3f3f3f;
int main() 
	{ fast();
	int n, b, e, ans = 0;
	int arr[nn] = {};
	cin >> n;
	cin >> b >> e;
	for (int i = 0; i < n - 1; i++) 
		{ int x, y;
		cin >> x >> y;
		for (int j = x; j < y; j++) arr[j]++;
	}
	for (int i = b; i < e; i++)
		{ if (!arr[i]) ans++;
	} cout << ans << endl ;
	return 0;
}
