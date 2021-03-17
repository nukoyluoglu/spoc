#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int cur = 1, cnt = 0;
	vector<int> ans;
	for (int i = 0; i < n; i++) 
		{ int x;
		cin >> x;
		if (x == cur) 
			{ cnt++;
			cur++;
		}  else 
			{ ans.push_back(cnt);
			cnt = 1;
			cur = 2;
		}
		if (i == n - 1) { ans.push_back(cnt); }
	}
	cout << (int)ans.size() << endl;
	for (int i = 0; i < (int)ans.size(); i++) 
		{ if (i > 0) cout << " ";
		cout << ans[i];
	}
	cout << endl ;
	return 0;
}
