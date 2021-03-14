#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
int n, res = 1, Max = 1;
pair<int, int> a[N];
void Input() 
	{ cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i].first >> a[i].second;
	sort(a + 1, a + n + 1);
}
void Solve() 
	{ int curr = 1;
	for (int i = 2; i <= n; i++) 
		{ if (a[i].first == a[i - 1].first && a[i].second == a[i - 1].second)
			{ curr++, res = max(res, curr);
		} else
			{ curr = 1;
	} }
	cout << res << '\n';
}
int main() 
	{ Input();
	Solve ( ) ;

	return 0;
}
