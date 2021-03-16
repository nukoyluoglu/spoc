#include <bits/stdc++.h>

using namespace std;

const int M = 3010;
vector<int> a[M], b;
int n, m;
bool judge(int x) 
	{ int num1 = a[1].size();
	for (int i = 2; i <= m; i++) 
		{ if (a[i].size() > x)
			{ num1 += a[i].size() - x;
		} else
			{ num1 += a[i].size();
	} }
	return num1 > x;
}
long long get_ans(int x) 
	{ long long ans = 0;
	int num1 = a[1].size();
	b.clear();
	for (int i = 2; i <= m; i++) 
		{ if (a[i].size() > x) 
			{ for (int j = x; j < a[i].size(); j++) 
				{ num1++;
				ans += a[i][j];
			}
			for (int j = 0; j < x; j++) b.push_back(a[i][j]);
		}  else
			{ for (int j = 0; j < a[i].size(); j++) b.push_back(a[i][j]);
	} }
	sort(b.begin(), b.end());
	if (num1 < x && x - num1 + 1 > b.size()) return 10000000000000ll;
	int hh = x - num1 + 1;
	for (int i = 0; i < hh; i++) ans += b[i];
	return ans;
}
bool cmp(int x, int y) 
	{ return x > y;
}
int main() 
	{ cin >> n >> m;
	for (int i = 1; i <= n; i++) 
		{ int x, y;
		cin >> x >> y;
		a[x].push_back(y);
	}
	for (int i = 1; i <= m; i++) sort(a[i].begin(), a[i].end(), cmp);
	long long ans = 10000000000000ll;
	for (int i = 0; i <= n / 2; i++) ans = min(ans, get_ans(i));
	cout << ans << endl ;

	return 0;
}
