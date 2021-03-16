#include <bits/stdc++.h>

using namespace std;

int a[55];
bool vis[1005];
vector<int> s;
int main() 
	{ int n, tot = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = n - 1; i >= 0; i--) 
		{ if (!vis[a[i]]) 
			{ s.push_back(a[i]);
			vis[a[i]] = true;
		}
	}
	int len = s.size();
	cout << len << endl;
	for (int i = len - 1; i > 0; i--) cout << s[i] << " ";
	cout << s [ 0 ] << endl ;

	return 0;
}
