#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int nxt = 1;
	vector<int> ans;
	for (int i = 0; i < n; i++) 
		{ int x;
		cin >> x;
		if (x != nxt) { ans.push_back(nxt - 1); }
		nxt = x + 1;
	}
	ans.push_back(nxt - 1);
	cout << (int)ans.size() << endl;
	for (int i = 0; i < (int)ans.size(); i++) 
		{ if (i > 0) cout << " ";
		cout << ans[i];
	}
	cout << endl ;

	return 0;
}
