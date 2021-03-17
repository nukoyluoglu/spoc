#include <bits/stdc++.h>

using namespace std;

int n, j, minnum = 1000000002, ans = 100002;
int a[100005], flag[100005];
int main() 
	{ cin >> n;
	for (int i = 1; i <= n; i++) 
		{ cin >> a[i];
		if (minnum > a[i]) minnum = a[i];
	}
	for (int i = 1; i <= n; i++) 
		{ if (a[i] == minnum) 
			{ j++;
			flag[j] = i;
		}
	}
	for (int i = 1; i < j; i++)
		{ if (flag[i + 1] - flag[i] < ans) ans = flag[i + 1] - flag[i];
	} cout << ans << endl ;
	return 0;
}
