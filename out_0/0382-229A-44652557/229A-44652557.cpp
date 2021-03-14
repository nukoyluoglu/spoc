#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m;
	string st;
	cin >> n >> m;
	int res[m];
	for (int i = 0; i < m; i++) { res[i] = 0; }
	for (int i = 0; i < n; i++) 
		{ cin >> st;
		if (st.find('1') == string::npos) 
			{ cout << -1 << endl;
			return 0;
		}
		int cur[3 * m];
		int curAns[m];
		for (int j = 0; j < 3 * m; j++) { cur[j] = st[j % m] - '0'; }
		int counter = 0;
		for (int a = m - 1; a >= 0; a--) 
			{ if (cur[a] == 1)
				{ break;
			} else
				{ counter++;
		} }
		for (int k = m; k < 2 * m; k++) 
			{ if (cur[k] == 1) 
				{ curAns[k % m] = 0;
				counter = 0;
			}  else
				{ curAns[k % m] = ++counter;
		} }
		counter = 0;
		for (int a = 2 * m; a < 3 * m; a++) 
			{ if (cur[a] == 1)
				{ break;
			} else
				{ counter++;
		} }
		for (int k = 2 * m - 1; k >= m; k--) 
			{ if (cur[k] == 1) 
				{ curAns[k % m] = 0;
				counter = 0;
			}  else 
				{ counter++;
				curAns[k % m] = min(curAns[k % m], counter);
			}
		}
		for (int j = 0; j < m; j++) { res[j] += curAns[j]; }
	}
	int min = INT_MAX;
	for (int i = 0; i < m; i++) 
		{ if (min > res[i]) min = res[i];
	}
	cout << min << endl ;

	return 0;
}
