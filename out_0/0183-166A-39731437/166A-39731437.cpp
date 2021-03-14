#include <bits/stdc++.h>

using namespace std;

const int N = 50 + 5;
int n, k, res;
pair<int, int> a[N];
bool cmp(pair<int, int> a, pair<int, int> b) 
	{ if (a.first > b.first)
		{ return true;
	} else if (a.first == b.first) 
		{ if (a.second < b.second) return true;
		return false;
	}  else
		{ return false;
} }
void Input() 
	{ cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i].first >> a[i].second;
	sort(a + 1, a + n + 1, cmp);
}
void Solve() 
	{ int problems = a[k].first, penalty = a[k].second;
	for (int i = 1; i <= n; i++) 
		{ if (a[i].first == problems && a[i].second == penalty) res++;
	}
	cout << res << '\n';
}
int main() 
	{ Input();
	Solve ( ) ;

	return 0;
}
