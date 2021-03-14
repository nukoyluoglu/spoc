#include <bits/stdc++.h>

using namespace std;

const int INF = 1 << 29;
int main() 
	{ int n, m;
	cin >> n >> m;
	string a[n];
	for (int i = 0; i < (n); i++) cin >> a[i];
	int ans[m];
	for (int i = 0; i < (m); i++) ans[i] = 0;
	int chk;
	for (int i = 0; i < (n); i++) 
		{ chk = 0;
		for (int j = 0; j < (m); j++) { chk += (a[i][j] == '1'); }
		if (chk == 0) 
			{ cout << "-1\n";
			return 0;
		}
	}
	for (int i = 0; i < (n); i++) 
		{ int last;
		bool found = 0;
		for (int j = m - 1; j >= 0; --j) 
			{ if (a[i][j] == '1') 
				{ last = j;
				break;
			}
		}
		int curr[m];
		for (int j = 0; j < (m); j++) curr[j] = INT_MAX;
		for (int j = 0; j < (m); j++) 
			{ if (a[i][j] == '1') 
				{ last = j;
				found = 1;
			}
			if (!found) 
				{ curr[j] = min(curr[j], (m - last) + j);
			}  else 
				{ curr[j] = min(curr[j], abs(j - last));
			}
		}
		found = 0;
		for (int j = 0; j < m; ++j) 
			{ if (a[i][j] == '1') 
				{ last = j;
				break;
			}
		}
		for (int j = m - 1; j >= 0; --j) 
			{ if (a[i][j] == '1') 
				{ last = j;
				found = 1;
			}
			if (!found) 
				{ curr[j] = min(curr[j], (last + 1) + (m - 1 - j));
			}  else 
				{ curr[j] = min(curr[j], abs(j - last));
			}
		}
		for (int j = 0; j < (m); j++) ans[j] += curr[j];
	}
	int res = INT_MAX;
	for (int i = 0; i < (m); i++) res = min(res, ans[i]);
	cout << res << endl ;

	return 0;
}
